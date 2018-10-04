#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class TicTacToeBoard
{
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
	vector<vector <string>>pegs;

	string next_player;


	vector <string> pegs = {"","","","","","","","",""}
};

#endif // TIC_TAC_TOE_H
