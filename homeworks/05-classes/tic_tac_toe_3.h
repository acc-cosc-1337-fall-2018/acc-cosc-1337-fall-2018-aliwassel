#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

#include "tic_tac_toe_board.h"

class TicTacToe3 : public TicTacToeBoard
{
public:
	TicTacToe3();
	TicTacToe3(vector<Peg>p);

protected:
	void display_board(std::ostream& out) const override;
	bool check_column_win() const override;
	bool check_row_win() const override;
	bool check_diagonal_win() const override;
	void get_input(std::istream& in);

};

#endif // !TIC_TAC_TOE_3_H