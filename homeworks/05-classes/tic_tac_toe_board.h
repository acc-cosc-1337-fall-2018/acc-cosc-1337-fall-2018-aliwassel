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
	
	bool game_over();
	void start_game(string player) { next_player = player; clear_board(); }
	void mark_board(const int position) { pegs[position - 1].val = next_player; set_next_player();}
	string get_player() const ;
	string get_winner()const;
	friend ostream& operator<<(std::ostream& o, const TicTacToeBoard& board);
	friend istream & operator>>(istream& in, TicTacToeBoard & b);

	// function that take the operator as argument? 

	/*virtual void print(ostream& out) const = 0*/;
	// function takes the istream as argument 

protected:
	
	void set_next_player();
	virtual bool check_column_win() const=0;
	virtual bool check_diagonal_win() const =0;
	virtual void display_board(ostream& out ) const = 0;
	virtual bool check_row_win() const =0;
	virtual void get_input(std::istream & in) = 0;
	bool check_board_full() const;
	void clear_board();
	vector <Peg> pegs;

	std::string next_player;
	std::string winner;
	
	

	
	
};
#endif // TIC_TAC_TOE_BOARD_H
