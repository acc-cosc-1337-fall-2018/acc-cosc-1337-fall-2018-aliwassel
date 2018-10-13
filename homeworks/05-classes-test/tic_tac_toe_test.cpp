#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe_board.h"



TEST_CASE("Test for function game_over")
{
	TicTacToeBoard check_game_over;
	REQUIRE(check_game_over.game_over() == false);

}

TEST_CASE("Test set first player set X")
{
	TicTacToeBoard check_x;
	check_x.start_game("X");
	REQUIRE(check_x.get_player() == "X");
}

TEST_CASE("Test set first player set O")
{
	TicTacToeBoard check_o;
	check_o.start_game("O");
	REQUIRE(check_o.get_player() == "O");
}
// test for 1st column game of tic tac


TEST_CASE("Test for win column")
{
	TicTacToeBoard first_colmn;
	first_colmn.start_game("X");
	first_colmn.mark_board(1);
	first_colmn.mark_board(2);
	first_colmn.mark_board(4);
	first_colmn.mark_board(9);
	first_colmn.mark_board(7);
	REQUIRE(first_colmn.game_over() == true);

	// check for 2nd column of game

	TicTacToeBoard second_colmn;

	second_colmn.start_game("X");
	second_colmn.mark_board(2);
	second_colmn.mark_board(3);
	second_colmn.mark_board(5);
	second_colmn.mark_board(7);
	second_colmn.mark_board(8);
	REQUIRE(second_colmn.game_over() == true);

	// check for third column of game

	TicTacToeBoard third_colmn;

	third_colmn.start_game("X");
	third_colmn.mark_board(3);
	third_colmn.mark_board(1);
	third_colmn.mark_board(6);
	third_colmn.mark_board(7);
	third_colmn.mark_board(9);
	REQUIRE(third_colmn.game_over() == true);
}

TEST_CASE("Test for win by row")
{
	TicTacToeBoard first_row;
	first_row.start_game("X");
	first_row.mark_board(1);
	first_row.mark_board(7);
	first_row.mark_board(2);
	first_row.mark_board(9);
	first_row.mark_board(3);
	REQUIRE(first_row.game_over() == true);

	// test for second row
	TicTacToeBoard second_row;
	second_row.start_game("X");
	second_row.mark_board(4);
	second_row.mark_board(1);
	second_row.mark_board(5);
	second_row.mark_board(9);
	second_row.mark_board(6);
	REQUIRE(second_row.game_over() == true);
	// test for third_row
	TicTacToeBoard third_row;
	third_row.start_game("X");
	third_row.mark_board(7);
	third_row.mark_board(4);
	third_row.mark_board(8);
	third_row.mark_board(6);
	third_row.mark_board(9);
	REQUIRE(third_row.game_over() == true);
}



TEST_CASE("Test for diagonal win")
{
	TicTacToeBoard check1_diagonal;
	check1_diagonal.start_game("X");
	check1_diagonal.mark_board(1);
	check1_diagonal.mark_board(2);
	check1_diagonal.mark_board(5);
	check1_diagonal.mark_board(3);
	check1_diagonal.mark_board(9);
	REQUIRE(check1_diagonal.game_over() == true);
	//check for second diagonal

	TicTacToeBoard check2_diagonal;
	check2_diagonal.start_game("X");
	check2_diagonal.mark_board(7);
	check2_diagonal.mark_board(2);
	check2_diagonal.mark_board(5);
	check2_diagonal.mark_board(8);
	check2_diagonal.mark_board(3);
	REQUIRE(check2_diagonal.game_over() == true);
}

// test for no win game
TEST_CASE("Test for no win game")
{
	TicTacToeBoard no_win;
	no_win.start_game("X");
	//check for all postion in pegs
	no_win.mark_board(1);
	no_win.mark_board(2);
	no_win.mark_board(3);
	no_win.mark_board(4);
	no_win.mark_board(5);
	no_win.mark_board(6);
	no_win.mark_board(7);
	no_win.mark_board(8);
	no_win.mark_board(9);
	REQUIRE(no_win.game_over() == false);
}