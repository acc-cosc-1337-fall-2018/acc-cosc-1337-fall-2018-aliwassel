#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H
#include<iostream>
#include<string>
#include<vector>
#include"peg.h"
using namespace std;
class TicTacToeBoard
{
	
public:
	TicTacToeBoard() = default;
	TicTacToeBoard(int x, int o, int c) :x_win(x), o_win(o), c_win(c) {};
	const bool game_over();
	void start_game(string player) { next_player = player; clear_board(); }
	void mark_board(const int position) { pegs[position - 1].val = next_player; set_next_player();}
	const string get_player();
	void display_board();
	TicTacToeBoard operator +=(const TicTacToeBoard & b);
	friend ostream& operator<<(ostream& o, const TicTacToeBoard& b);
	friend istream & operator>>(istream& in, TicTacToeBoard & b);
	// function that take the operator as argument? 

	virtual void print(ostream& out) const = 0;
	// function takes the istream as argument 
	virtual void get_input(istream & in) = 0;

	//TicTacToeBoard operator +=(const TicTacToeBoard& b);
	
	/*
	void mark_board(int position);
	string get_winner();
	string get_player();
	*/
	
	



private:
	int x_win{ 0 }, o_win{ 0 }, c_win{ 0 };
	string next_player;
	void set_next_player();
	vector <Peg> pegs = { 9 };
	
protected:

	virtual bool check_board_full() const;
	const bool check_column_win();
	const bool check_diagonal_win();
	const bool check_row_win();
	void clear_board();
	void display_board();
	void set_next_player();
	void get_input();
	int value{ 0 };
	string winner;
	//friend std::istream&  operator >>(std::istream & in, TicTacToeBoard& d);

	//friend std::ostream & operator << (std::ostream & out, const TicTacToeBoard& d);

	
	
	
};
#endif // TIC_TAC_TOE_BOARD_H
