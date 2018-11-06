#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TACt_TOE_MANAGER_H
#include "tic_tac_toe_board.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"


enum GameType
{
	tic_tac_toe_3,
	tic_tac_toe_4

};

class TicTacToeManager :public TicTacToeBoard
{
public:

	unique_ptr <TicTacToeBoard> get_game(GameType gametype);

	void save_game(unique_ptr<TicTacToeBoard>);

	void run();

		
	friend ostream& operator<< (ostream& out, const TicTacToeManager & manager);
private:
	
	vector <std::unique_ptr<TicTacToeBoard >>boards;
	
	int x_win{ 0 }, o_win{ 0 }, c_win{ 0 };

	void update_winner_count(std::string&);

};

#endif // !TIC_TAC_TOE_MANAGER_H
