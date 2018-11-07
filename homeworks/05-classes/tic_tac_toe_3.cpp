#include"tic_tac_toe_3.h"
#include "tic_tac_toe_manager.h"

TicTacToe3::TicTacToe3()
{
	for (int i = 0; i < 9; i++)
	{
		Peg peg;
		pegs.push_back(peg);

	}
}


void TicTacToe3::display_board(ostream& out) const
{
	cout << endl;
	for (unsigned i = 0; i < pegs.size(); i += 3)
	{
		out << pegs[i].val << "|" << pegs[i + 1].val << "|" << pegs[i + 2].val << endl;
	}
	
}


bool TicTacToe3::check_column_win() const
{
	bool x_col_1, x_col_2, x_col_3;
	bool o_col_1, o_col_2, o_col_3;
	x_col_1 = (pegs[0].val == "X" && pegs[3].val == "X" && pegs[6].val == "X");
	x_col_2 = (pegs[1].val == "X" && pegs[4].val == "X" && pegs[7].val == "X");
	x_col_3 = (pegs[2].val == "X" && pegs[5].val == "X" && pegs[8].val == "X");

	if (x_col_1 || x_col_2 || x_col_3) { return true; }
	//check rows of O
	o_col_1 = (pegs[0].val == "O" && pegs[3].val == "O" && pegs[6].val == "O");
	o_col_2 = (pegs[1].val == "O" && pegs[4].val == "O" && pegs[7].val == "O");
	o_col_3 = (pegs[2].val == "O" && pegs[5].val == "O" && pegs[8].val == "O");
	if (o_col_1 || o_col_2 || o_col_3) { return true; }
	else { return false; }
}

	


	

bool TicTacToe3:: check_row_win() const
{

	if ((pegs[0].val == "X" && pegs[1].val == "X" && pegs[2].val == "X") ||
            (pegs[0].val == "O" && pegs[1].val == "O" && pegs[2].val == "O"))
	{
		return true;
	}
	else if ((pegs[3].val == "X" && pegs[4].val == "X" && pegs[5].val == "X") || 
                 (pegs[3].val == "O" && pegs[4].val == "O" && pegs[5].val == "O"))
	{
		return true;
	}
	else if ((pegs[6].val == "X" && pegs[7].val == "X" && pegs[8].val == "X") || 
                 (pegs[6].val == "O" && pegs[7].val == "O" && pegs[8].val == "O"))
	{
		return true;
	}
	else
	{

		return false;
	}

}

bool TicTacToe3::check_diagonal_win() const
{
	if (pegs[0].val == "X" && pegs[4].val == "X" && pegs[8].val == "X" ||
            pegs[0].val == "O" && pegs[4].val == "O" && pegs[8].val == "O")
	{
		return true;
	}
	else if (pegs[2].val == "O" && pegs[4].val == "O" && pegs[6].val == "O" ||
                 pegs[2].val == "X" && pegs[4].val == "X" && pegs[6].val == "X")
	{
		return true;
	}

	return false;

}

void TicTacToe3::get_input(istream & in)
{
	int position;
	cout << "Enter position (1-9)";
	in >> position;
	mark_board(position);
}


