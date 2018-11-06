#ifndef TIC_TAC_TOE_3_h
#define TIC_TAC_TOE_3_H

#include"tic_tac_toe_board.h"

class TicTacToe3 : public TicTacToeBoard {

public:
	TicTacToe3();

protected:
	bool check_column_win()const ;
	bool check_diagonal_win()const;
	bool check_row_win() const;
	void display_board(std::ostream & out)const;
	void get_input(istream & in) const ;


	//void print(ostream& out) const override;
	//void get_input(istream & in) override;
	//friend ostream& operator<<(ostream& out, const TicTacToe3&  board);
	//friend istream & operator>>(istream & in, TicTacToe3& board);





};

#endif // !TIC_TAC_TOE_3_h



