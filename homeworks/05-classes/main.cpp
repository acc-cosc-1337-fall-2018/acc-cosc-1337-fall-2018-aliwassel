
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
#include<cctype>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	unique_ptr<TicTacToeManager> manager;
	
	
	string play_again;
	bool flag;
	std::string player;

	std::unique_ptr<TicTacToeBoard> board;

	int game;

	// make instance of enum
	GameType a;


	do
	{
		//get the valid game  tic_tac 3 or tic_tac4 

		std::cout << "Welcome: enter 0 or 1 to play ";
		std::cout << " tic_tac_toe 3 or tic_tac_toe 4 ";
		cin >> game;
		if (game == 0)
		{
			 a = tic_tac_toe_3;
		}
		else
			 a = tic_tac_toe_4;

		//start the game 
		board = manager->get_game(a);
		// select who goes first 

		
		do
		{
			flag = false;
			std::cout << "\n select who goes first " << endl;
			cin >> player;


			if (player == "X" || player == "O")
			{
				board->start_game(player);
				flag = true;

				
			}
			else { cout << "Sorry Invalid choice. try again:" << endl; }
			


		


		} while (!flag);
		
		
	
		
				
				
			
			
			

	

		

		

	

		while (!board->game_over())
		{
			cin >> *board;
			cout << *board;

		}

		manager->save_game(move(board));


		cout << "the winner is : " << board->get_winner();

		cout << "Do you want to plat again: Y(yes)/N(NO) ";
		cin >> play_again;


	} while (tolower(play_again== "y"));

	
	cout << *manager;
	return 0;

	
}