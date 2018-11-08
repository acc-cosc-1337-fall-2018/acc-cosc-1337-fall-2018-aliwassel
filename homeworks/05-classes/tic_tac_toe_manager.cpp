#include "tic_tac_toe_manager.h"


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
	for (int i =0; i<manager.boards.size(); i++)
	{
		out << *manager.boards[i];

	}
	out << "Games History\n X wins: " << manager.x_win << " O wins: " << manager.o_win << " Draws: " << manager.c_win << endl;
	return (out);

	
}


void TicTacToeManager::run()
{
	TicTacToeManager manager;
	GameType to_play;

	int choice{ 1 };
	std::string player;
	std::unique_ptr<TicTacToeBoard> board;
	int game;

	do
	{
		
		std::cout <<  "Welcome : please selecet "
			<<"version of tic tac toes "<<"3 or 4:";
		std::cin >> game;

		

		if (game == 3)
		{
			(to_play = tic_tac_toe_3); // have value of 0
		}
		else if (game==4)
		{
			to_play=tic_tac_toe_4; // has value of 1

		}
		else 
		{
			cout << "Error: Invalid entry please try again" << endl;
		}
		// get the version of games
		board = manager.get_game(to_play);

		
		std::cout << " Select  player X or O: "; // to mork the board with x or o
		std::cin >> player;

		board->start_game(player); // access to tic tac toe board

		while (!board->game_over())
		{
			std::cin >> *board;// is either tic tac 3  or tic tac 4 
			std::cout << *board;
		}
		// determine who won 
		
		cout << "The winner is :" << board->get_winner() << endl<< endl;
		//save the game use the move function
		manager.save_game(move(board));
		std::cout << "Enter 1 to play again, any other key to exit" << endl;
		std::cin >> choice;

	} while (choice == 1);

}









