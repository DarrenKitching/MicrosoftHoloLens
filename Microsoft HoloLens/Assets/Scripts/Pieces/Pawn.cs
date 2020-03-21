using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : ChessPiece
{
    public override bool [,] PossibleMoves ()
    {
        ChessPiece c, c2;
        bool [,] r = new bool[8, 8];
        if(isWhite)
        {
            //Diagonal Left
            if(CurrentX !=0 && CurrentY != 7)
            {
                c = ChessBoard.Instance.ChessPieces[CurrentX - 1, CurrentY + 1];
                if (c != null && !c.isWhite)
                    r[CurrentX - 1, CurrentY + 1] = true;
            }

            //Diagonal Right
            if (CurrentX != 7 && CurrentY != 7)
            {
                c = ChessBoard.Instance.ChessPieces[CurrentX + 1, CurrentY + 1];
                if (c != null && !c.isWhite)
                    r[CurrentX + 1, CurrentY + 1] = true;
            }

            //Middle
            if(CurrentY != 7)
            {
                c = ChessBoard.Instance.ChessPieces[CurrentX, CurrentY + 1];
                if (c == null)
                    r[CurrentX, CurrentY + 1] = true;
            }

            //Moddle on First Move
            if (CurrentY ==1)
            {
                c = ChessBoard.Instance.ChessPieces[CurrentX, CurrentY + 1];
                c2 = ChessBoard.Instance.ChessPieces[CurrentX, CurrentY + 2];
                if (c == null && c2 == null)
                {
                    r[CurrentX, CurrentY + 2] = true;
                }

            }
        }
        else
        {
            //Diagonal Left
            if (CurrentX != 0 && CurrentY != 0)
            {
                c = ChessBoard.Instance.ChessPieces[CurrentX - 1, CurrentY - 1];
                if (c != null && c.isWhite)
                    r[CurrentX - 1, CurrentY - 1] = true;
            }

            //Diagonal Right
            if (CurrentX != 7 && CurrentY != 0)
            {
                c = ChessBoard.Instance.ChessPieces[CurrentX + 1, CurrentY -1];
                if (c != null && c.isWhite)
                    r[CurrentX + 1, CurrentY + 1] = true;
            }

            //Middle
            if (CurrentY != 0)
            {
                c = ChessBoard.Instance.ChessPieces[CurrentX, CurrentY - 1];
                if (c == null)
                    r[CurrentX, CurrentY - 1] = true;
            }

            //Moddle on First Move
            if (CurrentY == 6)
            {
                c = ChessBoard.Instance.ChessPieces[CurrentX, CurrentY - 1];
                c2 = ChessBoard.Instance.ChessPieces[CurrentX, CurrentY - 2];
                if (c == null && c2 == null)
                {
                    r[CurrentX, CurrentY - 2] = true;
                }

            }
        }
        return r;
    }


}
