#ifndef ChessGame_hh
#define ChessGame_hh

#include <Player.hh>
#include <string.h>

using namespace std;

class ChessGame {
private:

	typedef array<class Piece, 32> PieceBoard;
	typedef vector<PieceBoard> ChessMoveHistory;

	int 	chess_board[8][8];
	int 	currMove;
	Color	nextTurn;

	/* 2 players of the Chess Game */
	Player *player1;
	Player *player2;

	/* Array of Piece */
	PieceBoard pieceBoard;

	/* Vector Object for moveHistory */
	ChessMoveHistory moveHistory;

	/* Not implemented here, but required */ 
	/* Game Status */
	bool gameOver;


 	/* Not implemented Copy Constructor */
	ChessGame (const ChessGame &);
	/* Not implemented Assignement Operator */
	ChessGame operator=(const ChessGame &);

	int 	GetCurrentMove() const { return currMove; }
	int 	GetNextTurn() const { return nextTurn; }
	int 	GetChessBoardValues (const int x, const int y) const;
	int 	GetChessBoardValuesIfTaken (const int x, const int y) const;
	Color	GetPieceColorFromPieceType (const int value) const;
	Player  *GetPlayerFromColor(const Color color) const;

	void 	SetCurrentMove (int move) { this->currMove = move; }
	void 	SetNextTurn(Color color) { this->nextTurn = color; } 
	int 	SetChessBoardAndMoveHistoryByPieceType (const PieceType type, const Color color);
	void 	SetChessBoardPosition (Position pos, PieceType value);

	void 	IncrementMove();
	int 	CheckIfPieceTypeIsValid (PieceType pieceType);

public:
	ChessGame ();

	~ChessGame();

	/* Moving a Piece */
	int 	PlayerMovePiece (const Color color, const PieceType type, const Position pos);
	int 	RestoreToMove (const int move);

	/*Debugging*/
	void 	PrintBoardValues();
};

#endif
