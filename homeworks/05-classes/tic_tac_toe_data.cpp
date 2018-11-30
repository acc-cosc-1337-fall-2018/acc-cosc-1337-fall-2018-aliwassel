#include "tic_tac_toe_data.h"

vector<unique_ptr<TicTacToeBoard>> TicTacToeData::get_games()
{
	vector <unique_ptr<TicTacToeBoard>> boards;
	
	streampos get_line;
	
	string line;
	while (tic_tac_toe_file.is_open())
	{
		
		vector<Peg> pegs_ch;

		getline(tic_tac_toe_file, line);
		 
		get_line = tic_tac_toe_file.tellg();
		tic_tac_toe_file.seekg(0, ios::end);
		for (int i = 0; i < get_line; i++)
		{
			
			getline(tic_tac_toe_file, line);
			

		}
		Peg(line);
		pegs_ch.push_back(line);
		/*boards->get_pegs().(line.val);*/

		unique_ptr<TicTacToeBoard>board;
		
		if (pegs_ch.size() == 9)
		{
			board = make_unique<TicTacToe3>(pegs_ch);
		}

		else 
		{
			board=make_unique<TicTacToe4>(pegs_ch);
		}

		boards.push_back(move(board));

		return boards;
	
	}
	


	tic_tac_toe_file.close();

	return boards;
}

void TicTacToeData::save_pegs(const std::vector<Peg>& pegs)
{
	tic_tac_toe_file << endl;
	for (const auto& pegs : pegs) 
	{

		tic_tac_toe_file<< pegs.val; 
	}
	tic_tac_toe_file << "\n";
	tic_tac_toe_file.close();
}
