#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include "peg.h"
#include<vector>
#include"tic_tac_toe_board.h"

class TicTacToeData
{
public:
	vector<unique_ptr <TicTacToeBoard> > get_games()
	void save_pegs(const std::vector <Peg>& pegs);
};
#endif // !TIC_TAC_TOE_DATA_H
