
#include "tic_tac_toe_board.h"

int main() 
{
	TicTacToeBoard play_tictac;


	do
	{
		
		string play;
		int play_again;
		int position = 0;

		cout << "welcom. please press y if you want to play tic tac." <<endl;
		cin >> play;
		play_tictac.start_game(play);
		while (play_tictac.game_over==false )
		{
			if (play == "X" || play == "O")
			{
				cout << "where to mark on board" << play_tictac.get_player() << " select a position (1-9)" << endl;
				cin >> position;
				play_tictac.mark_board(position);
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
