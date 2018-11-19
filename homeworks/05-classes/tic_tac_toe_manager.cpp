#include "tic_tac_toe_manager.h"


const vector<unique_ptr<TicTacToeBoard>>& TicTacToeManager::get_games()
{
	return boards;
}

unique_ptr<TicTacToeBoard> TicTacToeManager::get_game(GameType gametype)
{
	unique_ptr<TicTacToeBoard> a;
	


	if (gametype ==tic_tac_toe_3)
	{
		a = make_unique<TicTacToe3>();
	}
	else 
	{
		a = make_unique<TicTacToe4>();
	}
		
	
	return a;

}

void TicTacToeManager::save_game(unique_ptr<TicTacToeBoard> board)
{
	update_winner_count(board->get_winner());// board=winner 
	

	boards.push_back(move( board ));// save winner to vec of unique_ptr
}


	
	

	
	
	

	



void TicTacToeManager::update_winner_count(std::string & winner) // set xwin o win or c win if conditions true
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;

	}
	else
		c_win++;


}







ostream & operator<<(ostream & out, const TicTacToeManager & manager)
{
	out << " Games played" << endl;
	for (auto & board: manager.boards)
	{
		cout << *board;
	}

	out << " \nGame History: ";
	out << " Game won by player X:" << manager.x_win;
	out << " Game won by player O: " << manager.o_win;
	out << " Draw matches: " << manager.c_win << endl;

	return out;
}












