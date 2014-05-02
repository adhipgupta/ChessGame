#ifndef Position_hh
#define Position_hh

/* Class to maintain the position on the Chess Board. */
class Position {
private:
	int x;
	int y;
public:
	Position();
	Position(const int x, const int y);
	int GetX() const { return x; }
	int GetY() const { return y; }
	void SetX(const int x) { this->x = x; }
	void SetY(const int y) { this->y = y; }
	bool  InvalidPositionForPieceType() const;
};

#endif



