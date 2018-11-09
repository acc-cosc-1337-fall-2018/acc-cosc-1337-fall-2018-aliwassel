
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
#include<iostream>
#include<string>

int main()
{
	unique_ptr<TicTacToeManager> manager = make_unique<TicTacToeManager>();
	GameType to_play;

	int choice{ 1 };
	std::string player;
	std::unique_ptr<TicTacToeBoard> board;
	int game;

	do
	{

		std::cout << "Welcome : please selecet "
			<< "version of tic tac toes " << "3 or 4:";
		std::cin >> game;



		if (game == 3)
		{
			(to_play = tic_tac_toe_3); // have value of 0
		}
		else if (game == 4)
		{
			to_play = tic_tac_toe_4; // has value of 1

		}
		else
		{
			cout << "Error: Invalid entry please try again" << endl;
		}
		// get the version of games
		board = manager->get_game(to_play);


		std::cout << " Select  player X or O: "; // to mork the board with x or o
		std::cin >> player;

		board->start_game(player); // access to tic tac toe board

		while (!board->game_over())
		{
			std::cin >> *board;// is either tic tac 3  or tic tac 4 
			std::cout << *board;
		}
		manager->save_game(move(board));


		// determine who won 

		cout << "The winner is :" << board->get_winner() << endl << endl;
		//save the game use the move function
		/*manager->save_game(move(board));*/
		std::cout << "Enter 1 to play again, any other key to exit" << endl;

		std::cin >> choice;

	} while (choice == 1);
	cout << *manager;
	
	system("pause");

















	return 0;
}