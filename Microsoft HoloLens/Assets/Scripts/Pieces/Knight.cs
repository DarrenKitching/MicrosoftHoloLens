using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Knight : ChessPiece
{
    public override bool[,] PossibleMoves ()
    {
        bool[,] r = new bool[8, 8];

        KnightMove(CurrentX - 1, CurrentY + 2, ref r);

        KnightMove(CurrentX - 1, CurrentY - 2, ref r);

        KnightMove(CurrentX + 1, CurrentY + 2, ref r);

        KnightMove(CurrentX + 1, CurrentY - 2, ref r);

        KnightMove(CurrentX + 2, CurrentY + 1, ref r);

        KnightMove(CurrentX + 2, CurrentY - 1, ref r);

        KnightMove(CurrentX - 2, CurrentY + 1, ref r);

        KnightMove(CurrentX - 2, CurrentY - 1, ref r);

        return r;
    }

    public void KnightMove( int x, int y, ref bool[,] r)
    {
        ChessPiece c; 
        if(x>=0 && x< 8 && y>= 0 && y < 8)
        {
            c = ChessBoard.Instance.ChessPieces[x, y];
            if (c == null)
                r[x, y] = true;
            else if (isWhite != c.isWhite)
                r[x, y] = true;
        }

    }
}
