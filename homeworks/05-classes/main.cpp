
#include "tic_tac_toe_board.h"
using namespace std;

int main() 
{
	TicTacToeBoard play_tictac;


	do
	{
		
		std::string play;
		int play_again;
		int position = 0;

		std::cout << "welcom. please press y if you want to play tic tac." <<endl;
		cin >> play;
		play_tictac.start_game(play);
		while (play_tictac.game_over==false )
		{
			if (play == "X" || play == "O")
			{
				cout << "where to mark on board" << play_tictac.get_player() << " select a position (1-9)" << endl;
				cin >> play_tictac;
				
			}
			else
				cout << "Invalide entry try again: " << endl;
		}
		while (play_again) 
		{
			cout << "please enter 1 if you want to continue" << endl;
			cin >> play_again;
		}
		

	} while (play_tictac.game_over() == false);


	return 0;
}
