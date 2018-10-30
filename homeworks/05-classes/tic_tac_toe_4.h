#include"Tic_tac_toe_board.h"



class TicTacToe4 : public TicTacToeBoard
{
public:
	TicTacToe4() = default;
	void print(ostream& out) const override;
	void get_input(istream& in) override;


protected:
	bool check_column_win();
	bool check_diagonal_win();
	bool check_row_win();
	void display_board();
	void get_input();

};