#include"tic_tac_toe_3.h"

void TicTacToe3::print(ostream& out ) const 
{
	out << "TicTacToe 3" << endl;
	out << value << endl;

	
}

void TicTacToe3::get_input(istream & in )
{
	cout << "1st derived class \n";
	in >> value;
}