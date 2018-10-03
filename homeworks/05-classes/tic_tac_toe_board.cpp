#include"tic_tac_toe_board.h"

void TicTacToeBoard::start_game(string player) 
{
	for (auto p : player) {
		if (player == "X" || p == "O")
		{
			next_player = player;
		}
			
		
		clear_board();
	}
}

void TicTacToeBoard::mark_board(int position) 
{
	pegs[position] = next_player;
	set_next_player();

}
string TicTacToeBoard::get_player()
{
	return next_player;
}
void TicTacToeBoard::display_board()
{
	char display_board[3][3] = { '1','2','3','4','5','6','7','8','9' };
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << display_board[i][j];
		}
		endl;
	}
	cout << "You marked : " << next_player;

}

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

	bool TicTacoToeBoard::check_row_win()
	{
		if (peges[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
		{
			return true;
		}

		else if (pegs[3] == "X" && peges[4] == "X" && pegs[5] == "X")
		{
			return true;
		}
		else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
		{
			return true;
		}
		else if (peges[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
		{
			return true;
		}

		else if (pegs[3] == "O" && peges[4] == "O" && pegs[5] == "O")
		{
			return true;
		}
		else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
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
		else if (pegs = [pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
		{
			return true;
		}
		else
			cout << "wrong value" << endl;

		return false;
	}
