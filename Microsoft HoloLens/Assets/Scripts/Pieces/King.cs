using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class King : ChessPiece
{
    public override bool[,] PossibleMoves()
    {
        bool[,] r = new bool[8, 8];


        ChessPiece c;
        int i, j;

        //Top Side
        i = CurrentX - 1;
        j = CurrentY + 1;
        if(CurrentY!=7)
        {
            for(int k =0; k<3; k++)
            {
                if (i>= 0 || i< 8)
                {
                    c = ChessBoard.Instance.ChessPieces[i, j];
                    if (c == null)
                        r[i, j] = true;
                    else if (isWhite != c.isWhite)
                        r[i, j] = true;
                }

                i++;

            }
        }

        //Down Side
        i = CurrentX - 1;
        j = CurrentY - 1;
        if (CurrentY != 0)
        {
            for (int k = 0; k < 3; k++)
            {
                if (i >= 0 || i < 8)
                {
                    c = ChessBoard.Instance.ChessPieces[i, j];
                    if (c == null)
                        r[i, j] = true;
                    else if (isWhite != c.isWhite)
                        r[i, j] = true;
                }

                i++;

            }
        }

        //Middle Left
        if (CurrentX != 0)
        {
            c = ChessBoard.Instance.ChessPieces[CurrentX - 1, CurrentY];
            if (c == null)
                r[CurrentX - 1, CurrentY] = true;
            else if (isWhite != c.isWhite)
                r[CurrentX - 1, CurrentY] = true;
        }

        //Middle Right
        if (CurrentX != 7)
        {
            c = ChessBoard.Instance.ChessPieces[CurrentX + 1, CurrentY];
            if (c == null)
                r[CurrentX + 1, CurrentY] =true;
            else if (isWhite != c.isWhite)
                r[CurrentX + 1, CurrentY] = true;
        }

        return r;

    }


}
