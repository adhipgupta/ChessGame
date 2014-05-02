#include <Position.hh>
#include <ChessState.hh>

Position::Position(const int row, const int col) : x(row), y(col) {}

Position::Position() : x(INV_POS), y(INV_POS) {}

bool Position::InvalidPositionForPieceType() const 
{
	if (((x < 0) || (y < 0)) || (x > 7) || (y > 7)) {
		return true;
	} else {
		return false;
	}
	
}
