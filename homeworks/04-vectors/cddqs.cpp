/*
Write a value function sum_of_squares with a vector of ints list reference parameter
that computes the sum of the squares of the numbers in the vector. For example,
a vector of ints with values 2, 3, 4 should return 4+9+16 which is 29.

WRITE THE PARAM AND RETURN COMMENTS BELOW(SEE MY EXAMPLE ABOVE)

*/
//write function prototype

#include <iostream>
#include<vector>
#include<string>
#include<Cmath>

int sum_of_squares(vector <int> &numbers);

int main() {
	vector <int> numbers;
	sum_of_squares(numbers);


}

	




}

int sum_of_squares(vector <int> &numbers) 
{
	int sum_of_sq;
	numbers{ int x,int y,int z };
	for (unasigned int i = 0; i < numbers.size(); i++) {
		int x*x;
		int y*y;
		int z*z;
		sum_of_sq = x + y + z;
	}
	return sum_of_sq;

}