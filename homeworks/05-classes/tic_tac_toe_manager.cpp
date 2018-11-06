#include "tic_tac_toe_manager.h"

unique_ptr<TicTacToeBoard> TicTacToeManager::get_game(GameType gametype)
{
	unique_ptr<TicTacToeBoard> a;
	if(gametype==0)
	{
		a = make_unique<TicTacToe3>();
	}
	return a;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToeBoard> baord)
{
}

void TicTacToeManager::update_winner_count(std::string & winner)
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



















/*stream & operator<<(ostream & out, const TicTacToeManager & manager)
{
	TicTacToeBoard result;
	for(auto board: manager.boards)
	{
		out << board;
		result += board;
	}
	out << "Total Games played" << endl;
	out << result;
}



void TicTacToeManager::run()
{
	int choice{ 1 };

	do
	{
		TicTacToeBoard board;
		string player;
		cout << "Who goes first: X or O? " << endl;
		cin >> player;
		if (player == "X " || player == "O")
		{
			board.start_game(player);

		}
		else
			cout << "Sorry! invalid entry try again: " << endl;
		while (!board.game_over())
		{
			int position;
			cout << "Player " << player << " Mark the board  ";
			cin >> position;
			board.mark_board(position);
			board.display_board();
		}
		cout << "Enter 1 to play again, or any other key to exit : ";
		cin >> choice;
		
		
	} while (choice==1);
}

	*/
 
ostream & operator<<(ostream & out, const TicTacToeManager & manager)
{
	// TODO: insert return statement here
}
