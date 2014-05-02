#ifndef ChessState_hh
#define ChessState_hh

#define INV_POS		-1


namespace {
	static const int NUM_PIECES = 16;	
	static const int TOTAL_PIECES = 32;	
	static const int WHITE_PIECE_TYPE_MAX = 16;
	static const int BLACK_PIECE_TYPE_MAX = 32;
}	

typedef enum Colors_t {
	White = 0,
	Black,
	INVALID_PIECE_COLOR
}Color;

typedef enum Slot_Status_t {
	NOT_TAKEN = 0,
	TAKEN
}SlotStatus;

typedef enum Player_Rows_t {
	WHITE_ROW_1 = 0,
	WHITE_ROW_2 = 1,
	BLACK_ROW_1 = 6,
	BLACK_ROW_2 = 7
}PlayerRows;

typedef enum Error_t {
	SUCCESS = 0,
	POSITION_ERROR = 1,
	PLAYER_ERROR,
	INVALID_MOVE_ERROR,
	NOT_CORRECT_PLAYER_ERROR,
	INVALID_PLAYER_ERROR,
	INVALID_PIECE_TYPE_ERROR
}Errors;

typedef enum ChessPieceTypes{
	FIRST_INVALID_PIECE = 0,
	PAWN1,
	PAWN2,
	PAWN3,
	PAWN4,
	PAWN5,
	PAWN6,
	PAWN7,
	PAWN8,
	ROOK1,
	BISHOP1,
	KNIGHT1,
	KING1,
	QUEEN1,
	KNIGHT2,
	BISHOP2,
	ROOK2,
	INVALID_PIECE_TYPE = 33
}PieceType;

// Chess Game includes a chess board and 2 players. 
//Compiler by default generates a copy constructror, if I havent defined one.

#endif
