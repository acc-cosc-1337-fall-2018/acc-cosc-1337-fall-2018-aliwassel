#include"tic_tac_toe_board.h"
using namespace std;


TicTacToeBoard TicTacToeBoard::operator+=(const TicTacToeBoard & b)
{
	x_win += b.x_win;
	o_win += b.o_win;
	c_win += b.c_win;
	return TicTacToeBoard(x_win,o_win,c_win);
}

bool TicTacToeBoard::game_over()
{
	bool game = false;
	if (check_board_full() || check_column_win() || check_diagonal_win() || check_row_win())
	{
		if (check_board_full()) 
		{
			c_win++;
		}
			
		else if (next_player == "X")
		{
			o_win++;

		}
		else if (next_player == "O")
		{
			x_win++;
		}
		
		else
		{
			cout << "It is a Draw" << "\n";
		}
		game = true;

	}

	return game;
		
			   
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

		
	return false;
}

bool TicTacToeBoard::check_row_win()
{
	
	if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"))
	{
		return true;
	}
	else if ((pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O"))
	{
		return true;
	}
	else if ((pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O") || (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
	{
		return true;
	}
	else
	{
		
		return false;
	}

	


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

	return false;

}
	
	


	
	void TicTacToeBoard::clear_board()
	{
		for (int i=0; i< pegs.size();i++) 
		{
			pegs[i] = " ";
			
		}


	}

	bool TicTacToeBoard::check_board_full() 
	{
		bool board_full = true;
		//set up accumulator 
		//int space_full{ 0 };

		for (auto f : pegs) 
		{
			
			//if i = empty space
			if (f == " ") 
			{
				//accumulate 
				board_full=false;
				//cout << "NO win" << "\n";
				break;
				
			}
			

		}

		return board_full;

	}

	//in operator overloard
	std::istream & operator>>(std::istream & in, TicTacToeBoard & d)
	{
		int position;
		std::cout << "enter position" << "\n";
		
		in >> position;
		d.mark_board(position);
		return in;
		
	}

	//out operator overloard

	std::ostream & operator<<(std::ostream & out, const TicTacToeBoard & d)
	{

		for (int i = 0; 9 < 2; i+=3)
		{
			out << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2] << "\n";
		}
		out <<"X_win "<< d.x_win << endl;
		out <<"O_win "<< d.o_win << endl;
		out <<"C_win"<< d.c_win << endl;
		return out;
	}

	
	
		

	