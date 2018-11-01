#include "tic_tac_toe_board.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
#include<istream>
#include<string>

using namespace std;

string input_4;

TicTacToe3 tic_tac_3;
TicTacToe4 tic_tac_4;

void valid_input()
{
	string input_3;
	cout << " Who goes first X or O" << endl;
	cin >> input_3;
	if (input_3 == "X" || input_3 == "O")
	{
		
		tic_tac_3.start_game(input_3);
	}
	else
	{
		
		cout << "Sorry! Invalid choice, please try again\n";
	}


}


int main()
{
	valid_input();
	cout << "Tic Tac Toe 3x3 \n";
	while (tic_tac_3.game_over()==false)
	{
		
		cout << tic_tac_3;
		cin >> tic_tac_3;
		
		
		
	}
	
	valid_input();
	cout << "Tic Tac Toe 4x4 \n";
	while (tic_tac_4.game_over())
	{
		cin >> tic_tac_4;
		cout << tic_tac_4;

	}




	
	/*TicTacToeManager manager;
	manager.run();
	cout << manager;*/

	
	
	return 0;
	system("puase");
}
















//vector<unique_ptr <TicTacToeBoard>> bases;
//bases.push_back(make_unique <TicTacToe3>());
//


//new game
//
// 3 instances
//TicTacToeBoard a;
//TicTacToeBoard b;
//TicTacToeBoard c;
//TicTacToeBoard result;
//vector<TicTacToeBoard> vec_tic_tac{ a,b,c };
//TicTacToeBoard manager;

//string player_choice;
//char n;
//int quite = 1;
//while (quite == 1)
//{
//	for (auto i : vec_tic_tac)
//	{
//		std::cout
//			<< "Whoe goes first? X or O:  ";
//		cin >> player_choice;

//		if (player_choice == "X" || player_choice == "O")
//		{
//			i.start_game(player_choice);
//		}
//		else
//		{
//			cout << "invalid entry try again" << endl;
//			break;
//		}



//		while (i.game_over() == false)
//		{
//			cin >> i;

//		}
//		result += i;
//		cout << result;

//		std::cout << "Game over" << "\n";



//		std::system("pause");
//	}


//	if (quite == 'f')
//	{
//		std::cout << result;
//		break;
//	}


//}

//std::system("pause");


//return 0;





//		call the << operator to see the board
//		cout << b;
//		 accumulated the i to result
//		{
//			result += i;
//		}
//		 check who won;
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
//			 check if no winner 
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
//		 confirm user enter X or O
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
//
