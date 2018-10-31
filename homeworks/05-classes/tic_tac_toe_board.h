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
	string get_player() const ;
	
	friend ostream& operator<<(ostream& o, const TicTacToeBoard& board);
	friend istream & operator>>(istream& in, TicTacToeBoard & b);

	// function that take the operator as argument? 

	virtual void print(ostream& out) const = 0;
	// function takes the istream as argument 
	

	
	



private:
	
protected:
	int x_win{ 0 }, o_win{ 0 }, c_win{ 0 };
	string next_player;
	void set_next_player();
	virtual bool check_column_win() const=0;
	virtual bool check_diagonal_win() const =0;
	virtual void display_board() const = 0;
	virtual bool check_row_win() const =0;
	virtual void get_input(istream & in) = 0;


	bool check_board_full() const;
	void clear_board();
	vector <Peg> pegs{ 9 };
	string next_player;
	
	

	//friend std::istream&  operator >>(std::istream & in, TicTacToeBoard& d);

	//friend std::ostream & operator << (std::ostream & out, const TicTacToeBoard& d);

	
	
	
};
#endif // TIC_TAC_TOE_BOARD_H
