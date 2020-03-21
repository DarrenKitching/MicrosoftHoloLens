using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangePos : MonoBehaviour
{
    public static GameObject lastTouch = null;
    public ChessPiece currentChessPiece = null;
    public Tile destinationTile = null;

    public void Change()
    {
        print("Change Function");
        if (lastTouch != null && gameObject.name.Length == 2)
        {
            print("move");
            print("Coords of last piece are " + lastTouch.transform.position);
            Vector3 temp = gameObject.transform.position;
            temp.y += (float)1.024;

            lastTouch.transform.position = temp;
            print("New coords of last touch " + lastTouch.transform.position);
            lastTouch = null;
        }
        else
        {
            if (lastTouch != null)
            {
                print(lastTouch.name);
            }
            print("null");
        }
    }

    public void Move()
    {
        ChessBoard chessBoard = ChessBoard.Instance;
        
        print(this.name);

        if(this.name.Length == 2 && chessBoard.SelectedChessPiece != null)//its a tile and a piece has been selected to move there
        {
            destinationTile = this.GetComponent<Tile>();
            chessBoard.SelectDestinationTile(destinationTile);
            print("makemove");
            chessBoard.MovePiece(chessBoard.SelectedChessPiece, destinationTile);
        }
        else if(this.name.Length > 2 && chessBoard.SelectedChessPiece == null)// a piece is being selected
        {
            currentChessPiece = this.GetComponent<ChessPiece>();
            print(currentChessPiece.name);
            chessBoard.SelectChessPiece(currentChessPiece);
        }
        else
        {
            chessBoard.SelectedChessPiece.GetComponent<ChessPiece>().drop();
            chessBoard.HighlightAllowedMoves(currentChessPiece);
            chessBoard.SelectedChessPiece = null;
        }


        

    }



}
