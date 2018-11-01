#include"tic_tac_toe_board.h"




 bool TicTacToeBoard::game_over() 
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




 string TicTacToeBoard::get_player()const
 {
	 return next_player;
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


void TicTacToeBoard::clear_board()
{
	for (auto peg : pegs)
	{
		peg.val == " ";
	}


}

bool TicTacToeBoard::check_board_full()const

{
	for (auto& peg : pegs)
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
	int position;
	cout << " Enter the postion: \n";
	in >> position;
	board.mark_board(position);
	return in;

}

//out operator overloard

std::ostream & operator<<(std::ostream & out, const TicTacToeBoard & board)
{
	//while i is less then the size of the board we created  
	//board is a instance of tic tac toe that has access to its member function
	for (unsigned i = 0; i < board.pegs.size(); i += 3)
	{
		// mark the first postion on the board 
		out << board.pegs[i].val << "|" << board.pegs[i + 1].val << "|" << board.pegs[i + 2].val << "|" << endl;
		out << board.x_win << " " << board.o_win << " " << board.c_win << endl;

	}
	return out;
}

			   

	
			

		

//
//void TicTacToeBoard::start_game(std::string player)
//{
//	if (player == "X" || player == "O")
//	{
//		next_player = player;
//	}
//	
//	
//	clear_board();
//	
//}

//void TicTacToeBoard::mark_board(int position)
//{
//	pegs[position - 1] = next_player;
//	set_next_player();
//	std::cout << "\n";
//	display_board();
//}



	
	
	
		

	