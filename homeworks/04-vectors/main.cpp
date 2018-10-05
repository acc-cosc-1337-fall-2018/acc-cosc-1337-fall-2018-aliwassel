#include"vectors.h"
#include<iostream>



//dont forget using statement for cout object
int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max

	vector <int> numbers = { 4,5,1,50,6,77,0 };
	std::cout << "max num in vector is: " << get_max_from_vector(numbers) << endl;
	
	numbers= { 2,3,4 };

	std::cout << "sum of squares is : " << sum_of_squares(numbers) << "\n";
		
	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"

	vector <string>names = { "Joe", "joe","mary" };
	replace(names, "joe", "John");
	// loop over names to cout
	for (auto n : names) 
	{
		std::cout << n << endl;

	}
	//write code to call is_prime with value 3 output result


	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector


	return 0;
}