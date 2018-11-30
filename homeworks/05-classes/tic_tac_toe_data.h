#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include "peg.h"
#include<vector>
#include"tic_tac_toe_board.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<fstream>

class TicTacToeData
{
public:
	vector<unique_ptr <TicTacToeBoard> > get_games();
	void save_pegs(const std::vector <Peg>& pegs);
private:
	vector<string> pegs;
	fstream tic_tac_toe_file{ "tic_tac_toe.dat" , ios::in | ios::out| ios::app };
};
#endif // !TIC_TAC_TOE_DATA_H
