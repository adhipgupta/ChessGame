CC=g++
CXXFLAGS = -Weffc++ -Wextra -Werror -Wall -pedantic -fno-exceptions
CXXFLAGS += -o3
CXXFLAGS += -I .
CXXFLAGS += -std=c++0x
PROG = chessgame
all: $(PROG)
chess_objs = Piece.o Player.o Position.o ChessGame.o main.o
chessgame: $(chess_objs)
	$(CC) $(CXXFLAGS) $(chess_objs) -o $@
clean:
	rm -rf $(PROG) *.o
