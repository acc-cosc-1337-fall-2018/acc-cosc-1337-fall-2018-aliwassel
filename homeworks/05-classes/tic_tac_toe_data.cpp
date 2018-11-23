#include "tic_tac_toe_data.h"

vector<unique_ptr<TicTacToeBoard>> TicTacToeData::get_games()
{
	unique_ptr<TicTacToeBoard> boards;
	
	streampos get_line;
	string line;
	while (tic_tac_toe_file.is_open())
	{
		vector<Peg> pegs;

		get_line = tic_tac_toe_file.tellg();
		tic_tac_toe_file.seekg(0, ios::end);
		for (int i = 0; i < get_line; i++)
		{
			
			while (getline(tic_tac_toe_file, line))
			{
				cout << line << endl;

			}

		}
		Peg(line);
		pegs.push_back(line);
		unique_ptr<TicTacToeBoard>board;
		
		if (pegs.size() == 9) 
		{
			make_unique<TicTacToe3>();
		}
		else
		{
			make_unique<TicTacToe4>();
		}
		 
	}
	
	return vector<unique_ptr<TicTacToeBoard>>();
}

void TicTacToeData::save_pegs(const std::vector<Peg>& pegs)
{
	
	for (const auto& pegs : pegs) 
	{
		tic_tac_toe_file<< pegs.val; 
	}
	tic_tac_toe_file << "\n";
	tic_tac_toe_file.close();
}
