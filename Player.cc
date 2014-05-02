#include <Player.hh>

Player:: Player(const Color pieceColor): color(pieceColor)
{
	for (int type = 1; type <= NUM_PIECES; type++) {
		Position pos = GetInitialPositionOfPiece ((PieceType)type, color);
		piece[type - 1].initPiece((PieceType)type, pos);
	}
}

Position Player::GetInitialPositionOfPiece (const PieceType type, const Color color) const
{
	if (color == White) {
		if (type <= PAWN8) {
			return (Position(WHITE_ROW_2, type - 1));
		} else {
			return (Position(WHITE_ROW_1, type - PAWN8 - 1));
		}
	} else if (color == Black) {
		if (type <= PAWN8) {
			return (Position (BLACK_ROW_1, type - 1));		
		} else {
			return (Position (BLACK_ROW_2, type - PAWN8 - 1));
		}		
	} else {
		return Position(INV_POS, INV_POS);
	}
}

Piece& Player::GetPieceObjectFromPieceType(PieceType type)
{
	return (this->piece[(int)type - 1]);
}


