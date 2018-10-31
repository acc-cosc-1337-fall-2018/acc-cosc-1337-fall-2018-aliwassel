#ifndef TIC_TAC_TOE_3_h
#define TIC_TAC_TOE_3_H

#include"tic_tac_toe_board.h"
#include"peg.h"
class TicTacToe3 : public TicTacToeBoard {

public:
	TicTacToe3();

	//void print(ostream& out) const override;
	//void get_input(istream & in) override;
	//friend ostream& operator<<(ostream& out, const TicTacToe3&  board);
	//friend istream & operator>>(istream & in, TicTacToe3& board);



protected:
	bool check_column_win()const override;
	bool check_diagonal_win()const override;
	bool check_row_win() const override;
	void display_board(ostream & out )const override;
	void get_input(istream & in)override;


};

#endif // !TIC_TAC_TOE_3_h



