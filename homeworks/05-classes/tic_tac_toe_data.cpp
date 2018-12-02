#include "tic_tac_toe_data.h"

vector<unique_ptr<TicTacToeBoard>> TicTacToeData::get_games()
{
	vector <unique_ptr<TicTacToeBoard>> boards;
	
	
	fstream outfile(tic_tac_toe_file);
	string line;
	while (tic_tac_toe_file.is_open())
	{
		while (getline(outfile, line))
		{
			vector <Peg> pegs_out;
			for auto(c: line) 
			{
				string get_character(1, ch);
				pegs.push_back(Peg(get_character));
					
			}

		}

		
		

		unique_ptr<TicTacToeBoard>board;
		
		if (pegs_ch.size() == 9)
		{
			board=make_unique <TicTacToe3>(pegs));
			
		}

		else 
		{
			
			board=make_unique<TicTacToe4>(pegs_ch);
		}

		boards.push_back(move(board));

	
	
	}
	


	tic_tac_toe_file.close();

	return boards;
}

void TicTacToeData::save_pegs(const std::vector<Peg>& pegs)
{
	ofstream in_file(tic_tac_toe_file, ios::app);
	
	for (const auto& pegs : pegs) 
	{

		tic_tac_toe_file<< pegs.val; 
	}
	tic_tac_toe_file << "\n";
	tic_tac_toe_file.close();
}
