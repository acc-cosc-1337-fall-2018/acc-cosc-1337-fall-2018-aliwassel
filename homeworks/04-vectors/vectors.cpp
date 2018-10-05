#include "vectors.h"

int get_max_from_vector(vector<int>& numbers)
{
	//loop over numbers and return max num.
	int max_num = numbers[0];
	for (auto i : numbers) 
	{
		if i > max_num;
		max_num = i;
	}

	return max_num;
}


//write the code for sum_of_squares function here
sum_of_squares(vector<int> numbers) 
{
	int sum = 0;
	// loop over numbers and multiply each value
	for (auto i : numbers) 
	{
		sum += i * i;

	}
	return sum;
}


//write the code for function replace here
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)

	//loop over old and change it to new_val

	for (int i = 0; i < strings.size(); i++) 
	{
		if (strings[i] == old) 
		{
			string[i] = new_val;
		}
	}


}

//write is_prime function code here


bool is_prime(int num) 
{
	
	int prim_num = 0;
	for (int i=1;i<=numi;i++)
	{
		if (i % num==0)
		{
			++prim_num;
		}

	}
	if (prim_num == 2)
	{
		return true;
	}
	else
		return false;
}

//write vector_of_primes function code here

vector<int> vector_of_primes(int number)
{
	//create another vector to hold value of number
	vector<int>primes;
	//loop over it
	for int(i = 1; i <= number; i++) 
	{
		// if is_prime[i] is true then send number to vector of primes.
		if (is_prime(i)) 
		{
			primes.push_back(i);
		}
		// return value stored in vector.
		return primes;

	}
}