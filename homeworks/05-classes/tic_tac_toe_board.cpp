#include"tic_tac_toe_board.h"


bool TicTacToeBoard::game_over() 
{
	bool game = false;
	if ((check_board_full) ||
		(check_column_win) ||
		(check_diagonal_win) ||
		(check_row_win))
	{
		game = true;
		return game;
	}
	else
		cout << "sorry: it is a draw";
}

void TicTacToeBoard::start_game(string player)
{
	if (player == "X" || player == "O")
	{
		next_player = player;
	}
	
	clear_board();
	
}

void TicTacToeBoard::mark_board(int position) 
{
	pegs[position-1] = next_player;
	set_next_player();
	cout << "\n";
	display_board();

}
string TicTacToeBoard::get_player()
{
	return next_player;
}
void TicTacToeBoard::display_board()
{

	cout << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << endl;
	cout << pegs[3] << " | " << pegs[4] << " | " << pegs[5] << endl;
	cout << pegs[6] << " | " << pegs[7] << " | " << pegs[8] << endl;
}
	/*vector <string> display_board = {9,"" };*/

	/*for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++);
		cout << display_board[i][j] << "|" << endl;
	}
	*/			
		


void TicTacToeBoard::set_next_player() 
{
	if (next_player == "X") 
	{
		next_player = "O";

	}
	else
		next_player = "X";

}




bool TicTacToeBoard::check_column_win()
{
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	{
		return true;

	}
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;

	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		return true;
	}


	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;

	}
	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	{
		return true;

	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else
		cout << "wrong value" << endl;
	return false;
}

bool TicTacToeBoard::check_row_win()
{
	if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") ||
		(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"))
	{
		return true;
	}
	
		
	else if ((pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") ||
		(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")) 
	{
		return true;
	}
	
	
	
		

	else if ((pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O") ||
		(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")) 
	{
		return true;
	}
	
	else
		cout << "wrong value" << endl;
		return false;
		

	}

	bool TicTacToeBoard::check_diagonal_win()
	{
		if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
		{
			return true;
		}
		else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
		{
			return true;
		}
		else
			cout << "wrong value" << endl;

		return false;
	}
	void TicTacToeBoard::clear_board()
	{
		for (int i; i< pegs.size();i++) 
		{
			pegs[i] = " ";
			
		}


	}

	bool TicTacToeBoard::check_board_full() 
	{
		bool board_full = true;
		for (auto f : pegs) 
		{
			if (f == "X" || f == "O") 
			{
				cout << "Draw";
			}
			return board_full;
		}

	}