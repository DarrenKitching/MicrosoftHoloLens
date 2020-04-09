using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangePos : MonoBehaviour
{
    public ChessPiece currentChessPiece = null;
    public Tile destinationTile = null;

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
