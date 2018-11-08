#include"tic_tac_toe_4.h"

TicTacToe4::TicTacToe4() // allocate 16 empty space of pegs 
{
	for (int i=0; i<16; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}


void TicTacToe4::display_board(ostream & out) const
{
	cout << endl;
	for(unsigned i=0; i<pegs.size(); i+=4)
	{
		out << pegs[i].val << "|" << pegs[i + 1].val << "|" << pegs[i + 2].val << "|"
			<< pegs[i + 3].val << "|" << endl;
		


	}


}



bool TicTacToe4::check_column_win() const 

{
	bool col_1, col_2, col_3, col_4;
	// from 0 to 4 from 4 to 8 etc //4x4
	// 1 col 1 4 8 12
	col_1 = ((pegs[0].val == pegs[4].val && pegs[8].val == pegs[12].val) &&
		      pegs[0].val != " " && pegs[12].val != " ");

	col_2 = ((pegs[1].val == pegs[5].val && pegs[9].val == pegs[13].val) &&
		      pegs[1].val != " " && pegs[13].val != " ");
	
	col_3 = ((pegs[2].val == pegs[6].val && pegs[10].val == pegs[14].val) &&
		      pegs[2].val != " " && pegs[14].val != " ");
	
	col_4 = ((pegs[3].val == pegs[7].val && pegs[11].val == pegs[15].val) &&
		      pegs[3].val != " " && pegs[15].val != " ");
	
	if (col_1 || col_2 || col_3 || col_4)
	{
		return true;
	}
	else { return false; }
	
}

bool TicTacToe4::check_diagonal_win() const
{
	bool dia_1, dia_2;
	dia_1 = ((pegs[0].val == pegs[5].val && pegs[10].val == pegs[15].val) &&
		      pegs[0].val != " " && pegs[15].val != " ");
	dia_2 = ((pegs[3].val == pegs[6].val && pegs[9].val == pegs[12].val) &&
		      pegs[3].val != " " && pegs[12].val != " ");
	if (dia_1 || dia_2)
	{
		return true;
	}
	else
		return false;
	
	
}

bool TicTacToe4::check_row_win() const 
{
	bool row_1, row_2, row_3, row_4;
	row_1 = ((pegs[0].val == pegs[1].val && pegs[2].val == pegs[3].val) && 
		      pegs[0].val != " " && pegs[3].val != " ");
	row_2 = ((pegs[4].val == pegs[5].val && pegs[6].val == pegs[7].val) && 
		      pegs[4].val != " " && pegs[7].val != " ");
	row_3 = ((pegs[8].val == pegs[9].val && pegs[10].val == pegs[11].val) && 
		      pegs[8].val != " " && pegs[11].val != " ");
	row_4 = ((pegs[12].val == pegs[13].val && pegs[14].val == pegs[15].val) && 
		      pegs[12].val != " " && pegs[15].val != " ");
	if (row_1 || row_2 || row_3 || row_4) { return true; }
	else
	{
		return false;
	}
	
}



void TicTacToe4::get_input(istream & in)
{
	int position;
	cout << " Player "<<get_player()<<  " Enter you positon on board: " ;
	in >> position;
	mark_board(position);

	
}
