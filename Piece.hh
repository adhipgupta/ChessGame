#ifndef Piece_hh
#define Piece_hh

#include <ChessState.hh>
#include <Position.hh>
#include <vector>
#include <array>

/* Class defintion for a give piece of a player */
class Piece {
private :
	PieceType pieceType;
	Position pos;
	bool	killed;
public :
	Piece();
	Piece(const PieceType type, const Position &pos, const bool killStatus);

	PieceType GetPieceType () const { return pieceType; }
	Position GetPosition() const { return pos; }
	bool GetKilledStatus() const { return killed; }
	void SetKilledStatus(const bool killed) { this->killed = killed; }
	void SetPieceType (const PieceType type) { this->pieceType = type; }
	void SetPosition (const Position &pos) { this->pos = pos; }

	void initPiece (const PieceType type, const Position &pos);
};

#endif
