#include <iostream>
using namespace std;

int main()
{
    const unsigned size = 8;
    enum SQUARE
    {
        NOTHING = 0,
        PAWN,
        ROOK,
        KNIGHT,
        BISHOP,
        KING,
        QUEEN
    };

    SQUARE ChessBoard[size][size] = {NOTHING};

    // Initialize the squares containing rooks
    ChessBoard[0][0] = ChessBoard[0][size-1] = ROOK;
    ChessBoard[size-1][0] = ChessBoard[size-1][size-1] = ROOK;
    ChessBoard[0][1] = ChessBoard[0][size-2] = KNIGHT;
    ChessBoard[size-1][1] = ChessBoard[size-1][size-2] = KNIGHT;
    ChessBoard[0][2] = ChessBoard[0][size-3] = BISHOP;
    ChessBoard[size-1][2] = ChessBoard[size-1][size-3] = BISHOP;
    ChessBoard[0][3] = ChessBoard[size-1][3] = QUEEN;
    ChessBoard[0][4] = ChessBoard[size-1][4] = KING;
    //Row of Pawns
    for(unsigned i=0; i<size;++i)
        ChessBoard[1][i] = ChessBoard[size-2][i] = PAWN;
    //Printing codes of ChessBoard
    for(unsigned i=0; i<size;++i)
    {
        for(unsigned j=0; j<size;++j)
        {
            cout << ChessBoard[i][j] << '\t';
        }
        cout << endl;
    }


    return 0;
}
