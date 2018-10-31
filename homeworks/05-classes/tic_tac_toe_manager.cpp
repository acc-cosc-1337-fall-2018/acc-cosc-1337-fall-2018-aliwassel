//#include "tic_tac_toe_manager.h"
//
//ostream & operator<<(ostream & out, const TicTacToeManager & manager)
//{
//	TicTacToeBoard result;
//	for(auto board: manager.boards)
//	{
//		out << board;
//		result += board;
//	}
//	out << "Total Games played" << endl;
//	out << result;
//}
//
//
//
//void TicTacToeManager::run()
//{
//	int choice{ 1 };
//
//	do
//	{
//		TicTacToeBoard board;
//		string player;
//		cout << "Who goes first: X or O? " << endl;
//		cin >> player;
//		if (player == "X " || player == "O")
//		{
//			board.start_game(player);
//
//		}
//		else
//			cout << "Sorry! invalid entry try again: " << endl;
//		while (!board.game_over())
//		{
//			int position;
//			cout << "Player " << player << " Mark the board  ";
//			cin >> position;
//			board.mark_board(position);
//			board.display_board();
//		}
//		cout << "Enter 1 to play again, or any other key to exit : ";
//		cin >> choice;
//		
//		
//	} while (choice==1);
//}
//
//	