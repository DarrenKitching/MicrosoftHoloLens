using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

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

    int HalfmoveClock = 0;
    int FullMoveCounter = 1;

    public bool justEnPassant = false;
    public Tile enPassantTargetSquare = null;

    public bool isWhiteTurn = true;

    public ChessPiece SelectedChessPiece;
    public Tile SelectedTile;

    void Start()
    {
        initializeTileArray();
        initializePieces();
        Instance = this;
 //       StartCoroutine(get_AI_Move(generate_AI_url()));
    }

    public void SelectChessPiece(ChessPiece piece)
    {
        if (piece.isWhite != this.isWhiteTurn)
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
            //halfmoves
            HalfmoveClock++;
            if(piece.GetType().ToString() == "Pawn")
            {
                HalfmoveClock = 0;
            }
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
                HalfmoveClock = 0;
            }

            //update if its EnPassant
            if ((piece.GetType().ToString() == "Pawn") && ((piece.CurrentY == 1 && tile.Y == 4) || (piece.CurrentY == 6 && tile.Y == 5)))
            {
                print("setTure");
                justEnPassant = true;
                if(isWhiteTurn)
                enPassantTargetSquare = Tiles[tile.X - 1, tile.Y - 2];
                else
                enPassantTargetSquare = Tiles[tile.X - 1, tile.Y];
            }
            else
                justEnPassant = false;

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
            {
                isWhiteTurn = false;
                StartCoroutine(get_AI_Move(generate_AI_url()));
                FullMoveCounter++;
            }
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
        SpawnChessPiece(0, 4, 0);
        SpawnChessPiece(6, 4, 7);

        //spawn queen
        SpawnChessPiece(1, 3, 0);
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

    private string generate_AI_url()
    {
        string url = "https://www.chessdb.cn/cdb.php?action=queryall&board=";
        int emptyLine;
        for (int j = 7; j >=0 ; j--)
        {
            emptyLine = 0;
            for (int i = 0; i < 8; i++)
            {
                //if its an empty square
                if (ChessPieces[i, j] == null)
                {
                    emptyLine++;
                }
                //if its a piece
                else
                {
                    //if its the end of a line of blank squares (and not the first square)
                    if (i != 0)
                    {
                        if (ChessPieces[i - 1, j] == null)
                        {
                            url += emptyLine.ToString();
                            emptyLine = 0;
                        }
                    }
                    if (ChessPieces[i, j].GetType().ToString() == "Rook")
                        if (ChessPieces[i, j].isWhite)
                            url += "R";
                        else url += "r";

                    else if (ChessPieces[i, j].GetType().ToString() == "Knight")
                        if (ChessPieces[i, j].isWhite)
                            url += "N";
                        else url += "n";

                    else if (ChessPieces[i, j].GetType().ToString() == "Bishop")
                        if (ChessPieces[i, j].isWhite)
                            url += "B";
                        else url += "b";
                    else if (ChessPieces[i, j].GetType().ToString() == "King")
                        if (ChessPieces[i, j].isWhite)
                            url += "K";
                        else url += "k";

                    else if (ChessPieces[i, j].GetType().ToString() == "Queen")
                        if (ChessPieces[i, j].isWhite)
                            url += "Q";
                        else url += "q";

                    else if (ChessPieces[i, j].GetType().ToString() == "Pawn")
                        if (ChessPieces[i, j].isWhite)
                            url += "P";
                        else url += "p";
                }
                if (i == 7 && emptyLine != 0)
                {
                    url += emptyLine.ToString();
                }
            }
            url += "/";
        }
        url = url.Substring(0, url.Length - 1);

        if (justEnPassant)
        {
            string enPassant = "";
            print(enPassantTargetSquare.name);
            int x = (enPassantTargetSquare.X + 96);
            enPassant += System.Convert.ToChar(x);

            int c = (int)enPassantTargetSquare.Y;
            enPassant += c.ToString();

            url += "%20b%20KQkq%20" + enPassant + "%20" + HalfmoveClock.ToString() + "%20" + FullMoveCounter.ToString();
        }
        else { 
        url += "%20b%20KQkq%20-%20" + HalfmoveClock.ToString() + "%20" + FullMoveCounter.ToString();
        }
        print(url);
        return url;
    }

    private IEnumerator get_AI_Move(string url)
    {
        var moveRequest = new UnityWebRequest(url)
        {
            downloadHandler = new DownloadHandlerBuffer()
        };
        yield return moveRequest.SendWebRequest();

        if (moveRequest.isNetworkError || moveRequest.isHttpError)
        {
            Debug.Log(moveRequest.error);
            yield break;
        }

        string output = moveRequest.downloadHandler.text;
        print(output);
        AImove(output);
    }

    private void AImove(string move)
    {
        if (move[0] == (char)117)
        {
            print("unknown move");
            StartCoroutine(get_AI_Move(generate_AI_url()));
        }
        int startX = (int)move[5] - 97;
        int startY = (int)move[6] - 49;
        if (startX >= 0 && startX < 8 && startY >= 0 && startY < 8)
        {
            ChessPiece c = ChessPieces[startX, startY];
            SelectChessPiece(c);

            int endX = (int)move[7] - 97;
            int endY = (int)move[8] - 49;
            Tile t = Tiles[endX, endY];
            SelectDestinationTile(t);

            MovePiece(c, t);
        }
    }

}
