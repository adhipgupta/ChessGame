#include "ChessGame.hh"
#include "Position.hh"
int main()
{
	ChessGame *game1 = new ChessGame();
	game1->PrintBoardValues();
	game1->PlayerMovePiece(White, KNIGHT1, Position(3,4));
	game1->PlayerMovePiece(Black, KNIGHT2, Position(4,4));
	game1->PlayerMovePiece(White, PAWN1, Position(2,4));
	game1->PlayerMovePiece(Black, ROOK1, Position(5,2));
	game1->RestoreToMove(1);
	game1->PrintBoardValues();
	
	game1->PlayerMovePiece(White, PAWN1, Position(4,2));
	game1->PlayerMovePiece(Black, KNIGHT1, Position(3,2));
	game1->PlayerMovePiece(White, KNIGHT1, Position(3,2));

	game1->RestoreToMove(4);
	game1->PrintBoardValues();

	return 0;
}
