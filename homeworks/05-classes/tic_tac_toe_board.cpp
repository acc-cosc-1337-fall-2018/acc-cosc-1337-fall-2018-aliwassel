#include"tic_tac_toe_board.h"
using namespace std;



const bool TicTacToeBoard::game_over()
{
	bool end_game = check_board_full() || check_column_win() || check_diagonal_win() || check_row_win();
	if (end_game)
	{
		if (check_board_full())
		{
			c_win++;
		}
		else if (next_player == "X")
		{
			o_win++;
		}
		else
		{
			x_win++;
		}
	}
	return end_game;
}


void TicTacToeBoard::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";

	}

	else
	{
		next_player = "X";
	}


}


		
			   

	
			

		


void TicTacToeBoard::start_game(std::string player)
{
	if (player == "X" || player == "O")
	{
		next_player = player;
	}
	
	
	clear_board();
	
}

void TicTacToeBoard::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
	std::cout << "\n";
	display_board();
}

string TicTacToeBoard::get_player()const 
{
	return next_player;
}




	
void TicTacToeBoard::display_board()const 
{

	cout << pegs[0].val << " | " << pegs[1].val << " | " << pegs[2].val << endl;
	cout << pegs[3].val << " | " << pegs[4].val << " | " << pegs[5].val << endl;
	cout << pegs[6].val << " | " << pegs[7].val << " | " << pegs[8].val << endl;
}
		
		







	
	void TicTacToeBoard::clear_board()
	{
		for(auto peg: pegs)
		{
			peg.val == " ";
		}


	}

	bool TicTacToeBoard::check_board_full()const 
	
	{
		for (auto peg : pegs) 
		{
			if (peg.val == " ")
			{
				return false;
			}
		}
		return true;
	}
	

	//in operator overloard
	std::istream & operator>>(std::istream & in, TicTacToeBoard & board)
	{
		board.get_input(in);
		return in;
		
	}

	//out operator overloard

	std::ostream & operator<<(std::ostream & out, const TicTacToeBoard & board)
	{

		board.display_board();
		return out;
	}

	
	
		

	