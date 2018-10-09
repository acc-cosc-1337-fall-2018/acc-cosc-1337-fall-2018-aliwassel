#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class TicTacToeBoard
{
	TicTacToeBoard() = default;
	TicTacToeBoard(int x, int o, int c) :x_win{ x }, o_win(o), c_win(c){};
	TicTacToeBoard operator >>(istream & in, TicTacToeBoard& d);
	TicTacToeBoard operator << (ostream & out, const TicTacToeBoard& d);
	TicTacToeBoard operator +=(const TicTacToeBoard& b, const TicTacToeBoard& b2);
public:

	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	void display_board();

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	int x_win, o_win, c_win;
	vector<vector <string>>pegs;

	string next_player;


	vector <string> pegs = { 9,"" };
};
#endif // TIC_TAC_TOE_H
