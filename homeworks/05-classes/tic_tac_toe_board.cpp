#include "tic_tac_toe_manager.h"




const std::vector<Peg> TicTacToeBoard::get_pegs()
{
	return pegs;
}

bool TicTacToeBoard::game_over()
{
	bool end_game = (check_board_full() || check_column_win() || check_diagonal_win() || check_row_win());
	if (end_game)
	{
		if (check_board_full()) // if no win set winner to C
		{

			winner = "C";
		}

		else if (next_player == "X")
		{

			winner = "O";


		}
		else
			winner = "X";


	}
	return end_game;
}





 string TicTacToeBoard::get_player()const
 {
	 return next_player;
 }

 string TicTacToeBoard::get_winner() const
 {
	 return winner;
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
	board.get_input(in);
	return in;
	

}

//out operator overloard

std::ostream & operator<<(std::ostream & out, const TicTacToeBoard & board)
{
	board.display_board(out);
	
	return out;
}

			   

	
			

		



	
	
	
		

	