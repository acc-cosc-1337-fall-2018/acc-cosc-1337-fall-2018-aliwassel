#include "tic_tac_toe_data.h"

vector<unique_ptr<TicTacToeBoard>> TicTacToeData::get_games()
{
	vector <unique_ptr<TicTacToeBoard>> boards;
	
	
	fstream outfile(tic_tac_toe_file);
	string line;
	if (outfile.is_open())
	{
		while (getline(outfile, line))
		{
			vector <Peg> pegs;
			for(auto c: line) 
			{
				string get_character(1, c);
				pegs.push_back(get_character);
					
			}

			unique_ptr<TicTacToeBoard>board;

			if (pegs.size() == 9)
			{
				board = std::make_unique <TicTacToe3>(pegs);

			}

			else
			{

				board = make_unique<TicTacToe4>(pegs);
			}

			boards.push_back(move(board));




		}
		outfile.close();
		
		
	
	
		

	}
	return boards;
}

void TicTacToeData::save_pegs(const std::vector<Peg>& pegs)
{
	ofstream in_file(tic_tac_toe_file, ios::app);
	
	for (const auto& pegs : pegs) 
	{

		in_file<< pegs.val; 
	}
	in_file << "\n";
	in_file.close();


}
