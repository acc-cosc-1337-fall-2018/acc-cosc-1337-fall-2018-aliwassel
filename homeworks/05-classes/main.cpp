#include "tic_tac_toe_board.h"

//  instanc for function call
TicTacToeBoard obj1;

int main() 

{
	string player;
	int position 

	bool flag = false;

	while (flag)
	{
		cout << "welcom please enter X or O" << endl;
		cin >> player;
		cin>> position;
		obj1.start_game(player);
		obj1.mark_board(position);






	}
}