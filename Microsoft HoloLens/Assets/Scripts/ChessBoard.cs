using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChessBoard : MonoBehaviour
{
    public static ChessBoard Instance { set; get; }
    private bool[,] allowedMoves { set; get; }

    public Material[] materials;
    Renderer rend;

    public ChessPiece[,] ChessPieces { set; get; }
    public Tile[,] Tiles;

    public List<GameObject> chessPiecePrefabs = new List<GameObject>();
    public List<GameObject> activePieces;

    public int selectionX = -1;
    public int selectionY = -1;

    public bool isWhiteTurn = true;

    public ChessPiece SelectedChessPiece;
    public Tile SelectedTile;

    void Start()
    {
        initializeTileArray();
        initializePieces();
        Instance = this;
    }

    public void SelectChessPiece(ChessPiece piece)
    {
        if (piece.isWhite != isWhiteTurn)
        {
            print("wrong colour piece");
            return;
        }

        SelectedChessPiece = piece;
        selectionX = piece.CurrentX;
        selectionY = piece.CurrentY;

        //RAISE THE PIECE
        piece.GetComponent<ChessPiece>().lift();

        //Display AvailableTiles
        allowedMoves = piece.PossibleMoves();
        HighlightAllowedMoves(piece);

    }

    public void HighlightAllowedMoves(ChessPiece piece)
    {
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0;j < 8; j++)
            {
                if (allowedMoves[i, j] == true)
                    ToggleTileHighlight(Tiles[i, j]);
            }
        }
    }

    private void ToggleTileHighlight (Tile tile)
    {
        Renderer r = tile.GetComponent<Renderer>();
        Material m = r.material;

        if (m.color == Color.green)
        {
            if (tile.isWhite)
                m.color = Color.white;
            else
                m.color = Color.black;
        }
        else
        {
            m.color = Color.green;
        }
        r.material = m;
    }

    public void SelectDestinationTile(Tile tile)
    {
        SelectedTile = tile;
    }

    public void MovePiece (ChessPiece piece, Tile tile)
    {
        if (allowedMoves[tile.X-1, tile.Y-1])
        {

            //remove piece if needed
            ChessPiece capturePiece = ChessPieces[tile.X-1, tile.Y-1];
            if (capturePiece != null && capturePiece.isWhite != isWhiteTurn)
            {
                if (capturePiece.GetType() == typeof(King))
                {
                    return;
                }
                activePieces.Remove(capturePiece.gameObject);
                Destroy(capturePiece.gameObject);
            }


            //transforming the pieces position
            Vector3 pos = piece.transform.position;
            pos.x = tile.transform.position.x - 1;
            pos.z = tile.transform.position.z + 1;
            piece.transform.position = pos;



            //Update pieces array
            ChessPieces[tile.X - 1, tile.Y - 1] = piece;
            ChessPieces[piece.CurrentX, piece.CurrentY] = null;

            //Set Pieces new Position
            piece.CurrentX = tile.X-1;
            piece.CurrentY = tile.Y-1;

            //resetting the turn
            SelectedChessPiece = null;
            SelectedTile = null;
            if (isWhiteTurn)
                isWhiteTurn = false;
            else
                isWhiteTurn = true;

            //drop the piece
            piece.GetComponent<ChessPiece>().drop();

            //turn off the highlight
            HighlightAllowedMoves(piece);
        }
    }

    private void initializePieces()
    {
        activePieces = new List<GameObject>();
        ChessPieces = new ChessPiece[8, 8];

        //spawn king
        SpawnChessPiece(0, 3, 0);
        SpawnChessPiece(6, 4, 7);

        //spawn queen
        SpawnChessPiece(1, 4, 0);
        SpawnChessPiece(7, 3, 7);

        //spawn rook1
        SpawnChessPiece(2, 7, 0);
        SpawnChessPiece(8, 7, 7);

        //spawn rook2
        SpawnChessPiece(2, 0, 0);
        SpawnChessPiece(8, 0, 7);

        //spawn bishop1
        SpawnChessPiece(3, 2, 0);
        SpawnChessPiece(9, 2, 7);

        //spawn bishop2
        SpawnChessPiece(3, 5, 0);
        SpawnChessPiece(9, 5, 7);

        //spawn knight
        SpawnChessPiece(4, 1, 0);
        SpawnChessPiece(10, 1, 7);

        //spawn knight
        SpawnChessPiece(4, 6, 0);
        SpawnChessPiece(10, 6, 7);

        //spawn pawns
        for (int i = 0; i < 8; i++)
        {
            SpawnChessPiece(5, i, 1);
            SpawnChessPiece(11, i, 6);
        }

    }

    private void initializeTileArray()
    {
        Tiles = new Tile[8, 8];

        for (int j = 0; j < 8; j++)
        {
            Tiles[0, j] = GameObject.Find("A" + (j + 1).ToString()).GetComponent<Tile>();
        }
        for (int j = 0; j < 8; j++)
        {
            Tiles[1, j] = GameObject.Find("B" + (j + 1).ToString()).GetComponent<Tile>();
        }
        for (int j = 0; j < 8; j++)
        {
            Tiles[2, j] = GameObject.Find("C" + (j + 1).ToString()).GetComponent<Tile>();
        }
        for (int j = 0; j < 8; j++)
        {
            Tiles[3, j] = GameObject.Find("D" + (j + 1).ToString()).GetComponent<Tile>();
        }
        for (int j = 0; j < 8; j++)
        {
            Tiles[4, j] = GameObject.Find("E" + (j + 1).ToString()).GetComponent<Tile>();
        }
        for (int j = 0; j < 8; j++)
        {
            Tiles[5, j] = GameObject.Find("F" + (j + 1).ToString()).GetComponent<Tile>();
        }
        for (int j = 0; j < 8; j++)
        {
            Tiles[6, j] = GameObject.Find("G" + (j + 1).ToString()).GetComponent<Tile>();
        }
        for (int j = 0; j < 8; j++)
        {
            Tiles[7, j] = GameObject.Find("H" + (j + 1).ToString()).GetComponent<Tile>();
        }
    }

    private void SpawnChessPiece(int index, int letter, int number)
    {
        Vector3 pos = Tiles[letter, number].transform.position;
        Quaternion orientation = Quaternion.Euler(-90, 0, 0);
        pos.y = 3;
        pos.x -= 1;
        pos.z += 1;
        if (index == 4)
        {
            orientation = Quaternion.Euler(0, 90, 0);
        }
        if (index == 10)
        {
            orientation = Quaternion.Euler(0, -90, 0);
        }
        GameObject go = Instantiate(chessPiecePrefabs[index], pos, orientation) as GameObject;
        ChessPieces[letter, number] = go.GetComponent<ChessPiece>();
        ChessPieces[letter, number].SetPosition(letter, number);
        activePieces.Add(go);

    }

}
