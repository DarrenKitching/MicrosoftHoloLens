using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class ChessPiece : MonoBehaviour
{
    public static ChessPiece Instance { set; get; }
    public int CurrentX { set; get; }
    public int CurrentY { set; get; }
    public bool isWhite;
    private ChessBoard chessBoard = ChessBoard.Instance;

    //    public GameObject piece;

    public void SetPosition(int x, int y)
    {
        CurrentX = x;
        CurrentY = y;
    }

    public virtual bool [,] PossibleMoves()
    {
        return new bool[8,8];
    }


    public void drop()
    {
        this.GetComponent<Rigidbody>().useGravity = true;
        Vector3 pos1 = this.transform.position;
        this.transform.position = pos1;
    }

    public void lift()
    {
        this.GetComponent<Rigidbody>().useGravity = false;
        Vector3 pos = this.transform.position;
        pos.y += 1;
        this.transform.position = pos;
    }
}
