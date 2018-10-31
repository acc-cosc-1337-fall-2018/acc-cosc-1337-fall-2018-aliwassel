#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TACt_TOE_MANAGER_H
#include "tic_tac_toe_board.h"

class TicTacToeManager :public TicTacToeBoard
{
public:


	void run();
	friend ostream& operator<< (ostream& out, const TicTacToeManager & manager);
private:
	vector<TicTacToeBoard> boards;
protected:
	void display_board()const;
};

#endif // !TIC_TAC_TOE_MANAGER_H
