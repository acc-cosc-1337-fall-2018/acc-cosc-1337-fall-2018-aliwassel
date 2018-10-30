#include"tic_tac_toe_board.h"

class TicTacToe3 : public TicTacToeBoard {

public:
	TicTacToe3() = default;
	void print(ostream& out) const override;
	void get_input(istream & in) override;
	//friend ostream& operator<<(ostream& out, const TicTacToe3&  board);
	//friend istream & operator>>(istream & in, TicTacToe3& board);
	

	
protected: 
	bool check_cloumn_win();
	bool check_diagonal_Win();
	bool check_row_win();
	void display_board();
	void get_input();
	

};