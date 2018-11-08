#include "tic_tac_toe_manager.h"


unique_ptr<TicTacToeBoard> TicTacToeManager::get_game(GameType gametype)
{
	unique_ptr<TicTacToeBoard> a;
	cout << "Enter 0 to play tic tac 3  "<<endl;
	cout << " Or 1 to play tic tac 4: ";


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
	// we have too make unique_ptr of <TicTacToe>
	

	boards.push_back(move( board ));
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
	return (out);
	// TODO: insert return statement here
}


void TicTacToeManager::run()
{

	int choice{ 1 };

	do
	{
		int game;
		std::cout << "What game 3 or 4: ";
		std::cin >> game;

		std::unique_ptr<TicTacToeBoard> board;

		if (game == 3)
		{
			board = std::make_unique<TicTacToe3>();
		}
		else
		{
			board = std::make_unique<TicTacToe4>();
		}

		std::string player;
		std::cout << "Enter first player X or O: ";
		std::cin >> player;

		board->start_game(player);

		while (!board->game_over())
		{
			std::cin >> *board;
			std::cout << *board;
		}

		std::cout << "Enter 1 to play again, any other key to exit";
		std::cin >> choice;

	} while (choice == 1);

}









