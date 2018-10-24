#include "tic_tac_toe_board.h"
using namespace std;

int main()
{
	//new game

	// 3 instances
	TicTacToeBoard a;
	TicTacToeBoard b;
	TicTacToeBoard c;
	TicTacToeBoard result;
	vector<TicTacToeBoard> vec_tic_tac{ a,b,c };
	TicTacToeBoard manager;
	string player_choice;
	char n;
	int quite = 1;
	while (quite == 1)
	{
		for (auto i : vec_tic_tac)
		{
			std::cout
				<< "Whoe goes first? X or O:  ";
			cin >> player_choice;

			if (player_choice == "X" || player_choice == "O")
			{
				i.start_game(player_choice);
			}
			else
			{
				cout << "invalid entry try again" << endl;
				break;
			}



			while (i.game_over() == false)
			{
				cin >> i;

			}
			result += i;
			cout << result;

			std::cout << "Game over" << "\n";



			std::system("pause");
		}


		if (quite == 'f')
		{
			std::cout << result;
			break;
		}


	}

	std::system("pause");


	return 0;





	//		//call the << operator to see the board
	//		cout << b;
	//		// accumulated the i to result
	//		{
	//			result += i;
	//		}
	//		// check who won;
	//		if (i.set_next_player()) == "X")
	//		{
	//			check_who_won = "O"
	//		}
	//		else if (i.set_next_player() == "O")
	//		{
	//			check_who_won = "X";
	//
	//		}
	//		else
	//		{
	//			// check if no winner 
	//			cout << "NO winner:" << "\n";
	//		}
	//
	//
	//	}
	//
	//	cout << "The Winner is  : " << check_who_won << "\n";
	//}





	//{
	//	TicTacToeBoard play_tictac;
	//	std::string play;
	//	int play_again;
	//	int position = 0;
	//	bool valid_input;
	//	bool check_for_x_o;
	//
	//
	//
	//	do
	//	{
	//		// confirm user enter X or O
	//		do
	//		{
	//		
	//
	//			cout << "welcom. player 1: mark the postion on the board: " << endl;
	//			cin >> play;
	//			if (play == "X") || (play == "O")
	//			{
	//
	//				play_tictac.start_game(play);
	//				valid_input = true;
	//			}
	//			else 
	//			{
	//				valid_input = false;
	//				cout << "please try again: enter X or O to start the game: " << "\n";
	//				
	//			}
	//		
	//			
	//
	//		} while (!valid_input);
	//		
	//		while (!play_tictac.game_over())
	//		{
	//			cout << "where to mark on board" << play_tictac.get_player() << " select a position (1-9)  " << endl;
	//			cin >> position;
	//			play_tictac.mark_board(position);
	//			play_tictac.display_board();
	//			
	//			
	//		}
	//	 
	//		
	//		cout << "please enter 1 if you want to continue" << endl;
	//		cin >> play_again;
	//		
	//		
	//
	//	} while (play_again=="1");
	//
	//
	//	return 0;
	//}
}