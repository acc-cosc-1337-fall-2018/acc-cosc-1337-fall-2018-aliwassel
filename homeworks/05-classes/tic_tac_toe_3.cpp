#include"tic_tac_toe_3.h"


TicTacToe3::TicTacToe3()
{
	for (int i = 0; i < 9; i++) // allocate 9 empty space in the vector of pegs 
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
	bool col_1, col_2, col_3;


	col_1 = ((pegs[0].val == pegs[3].val  && pegs[3].val == pegs[6].val) &&
		pegs[0].val != " " ); // can write it like this as well

	col_2 = ((pegs[1].val == pegs[4].val && pegs[4].val == pegs[7].val)
		&& pegs[1].val != " " && pegs[7].val != " ");


	col_3 = ((pegs[2].val == pegs[5].val  && pegs[5].val == pegs[8].val)
		&& pegs[2].val != " " && pegs[8].val != " ");


	if (col_1 || col_2 || col_3)
	{
		return true;
	}
	else
		return false;

}
	


	


bool TicTacToe3::check_row_win() const
{
	bool row_1, row_2, row_3;
		row_1 = ((pegs[0].val == pegs[1].val && pegs[2].val == pegs[3].val) &&
			pegs[0].val != " " && pegs[3].val != " ");
	row_2 = ((pegs[4].val == pegs[5].val && pegs[6].val == pegs[7].val) &&
		pegs[4].val != " " && pegs[7].val != " ");
	row_3 = (pegs[7].val == pegs[8].val && pegs[7].val != " " && pegs[8].val != " ");

	if (row_1 || row_2 || row_3)
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
	

	
	bool dia_1, dia_2;
	dia_1= ((pegs[0].val == pegs[4].val  && pegs[4].val==pegs[8].val) &&
		pegs[0].val != " " && pegs[8].val != " ");

	dia_2= ((pegs[2].val == pegs[4].val && pegs[4].val== pegs[6].val) &&
		pegs[2].val != " " && pegs[6].val != " ");

	if (dia_1 || dia_2)
	{
		return true;

	}
	else
		return false;

}

void TicTacToe3::get_input(istream & in)
{
	int position;
	cout << "player "  << get_player()<< "  Enter a position :  ";
	in >> position;
	mark_board(position);
}


