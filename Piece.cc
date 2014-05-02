#include <Piece.hh>

Piece:: Piece (const PieceType type, const Position &posn, const bool killStatus) : pieceType(type), pos(posn), killed(killStatus) {}


Piece::Piece(): pieceType(INVALID_PIECE_TYPE), pos(INV_POS, INV_POS), killed(false) {};

void Piece :: initPiece (const PieceType type, const Position &pos)
{
	SetPieceType (type);
	SetPosition (pos);
}

