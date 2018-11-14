#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TACt_TOE_MANAGER_H

#include"tic_tac_toe_board.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<memory>
#include <string>

enum GameType
{
	tic_tac_toe_3,
	tic_tac_toe_4

};

class TicTacToeManager
{
public:
	TicTacToeManager() = default;
	
	vector<unique_ptr<TicTacToeBoard>> get_games();
	
	

	unique_ptr <TicTacToeBoard> get_game(GameType gametype);

	void save_game(unique_ptr<TicTacToeBoard>board);
	friend ostream& operator<< (ostream& out,  TicTacToeManager & manager);

private:

	void update_winner_count(std::string& winner);

	vector <std::unique_ptr<TicTacToeBoard >>boards;
	
	int x_win{ 0 }, o_win{ 0 }, c_win{ 0 };

	

};

#endif // !TIC_TAC_TOE_MANAGER_H
