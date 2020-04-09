using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Chess_AI : MonoBehaviour
{
    int startX;
    int startY;
    int endX;
    int endY;
    string url;

//  https://www.chessdb.cn/cdb.php?action=querybest&board=rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR%20w%20KQkq%20-%200%201

    string move = "move:g1f3";

    // Start is called before the first frame update
    void Start()
    {
/*        startX = (int)move[5] - 97;
        startY = (int)move[6] - 49;
        endX = (int)move[7] - 97;
        endY = (int)move[8] - 49;

        Debug.Log(startX);
        Debug.Log(startY);
        Debug.Log(endX);
        Debug.Log(endY);
        ChessBoard chessBoard = ChessBoard.Instance;
        ChessPiece c = chessBoard.ChessPieces[0,0].get;
        Debug.Log(c.name);
        */
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void generate_url()
    {

    }


}
