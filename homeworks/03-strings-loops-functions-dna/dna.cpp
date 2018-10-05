#include<math.h>
#include "dna.h"
#include<iostream>
using namespace std;



int get_point_mutations(std::string dna1, std::string dna2)
{
	int point_mut;
	if (dna1.size() != dna2.size())
		return -1;
	else 
		for (int i = 0; i < dna1.size(); i++) 
		{
			if (dna1[i] != dna2[i]) 
			{
				++point_mut;
			}
		}return point_mut;



}





//write function code for std::string get_dna_complement(std::string dna)
// reverse_dna.


std::string get_dna_complement(std::string dna)

{
	string reverse_dna = "";
	// call the size()-1 function
	dna_length = dna.size() - 1;
	//loop over dna and reverse it.
	for (int i = dna_length; i > 0; --i)
		reverse_dna.push_back(dna[i]);
	//loop over reverse dna and change each
	// corresponding letters.

	for (int i = 0; i < reverse_dna.size(); ++i)
	{
		switch (reverse_dna[i])
		{
		case 'A':
			reverse_dna[i] = 'T';
			break;
		case 'T':
			reverse_dna[i] = 'A';
			break;
		case 'C':
			reverse_dna[i] = 'G';
			break;
		case 'G':
			reverse_dna[i] = 'C';
			break;
		}

	}
	return reverse_dna;
}

			



//write function code for std::string transcribe_dna_into_rna(std::string dna);

std::string transcribe_dna_into_rna(std::string dna)
{
	// holds value of dna and changes T to U.
	string show_rna;
	// loop over dna and if dna[i]==T changed it to U
	for (int i; i < dna.size(); i++)
	{
		if (dna[i] == 'T')
		{
			show_rna.push_back('U');

		}
		else if (dna[i]=='U')
		{
			show_rna.push_back('T');
			
		}
		else
			show_rna.push_back(dna[i]);

	}
	return show_rna;
}



double get_gc_content(std::string dna)
{
	auto size = dna.size(); //get the size of string let auto handle the data type
	auto gc_count{ 0 }; //initialize to 0 (int) let auto handle data type

	//for ranged loop, for each character in loop, s holds one char
	//auto determines data type in this case s is a char data type
	for (auto s : dna)
	{
		if (s == 'C') || (s = 'G')
		{
			//accumulate GC
			gc_count = gc_count+1;

		}
	
			//in C++ logical and is && and logical or is ||
		//usage (and) condition1 && condition2 --- usage (or) condition1 || condition2 
		//write code to determine if s is 'C' or 'G' then increment gc_count by 1


	}

	//dividing two integers nets an integer
	//here we need to convert one of the integers to double to get double division
	//that is a result with decimal values
	//static_cast converts a data type from one to another
	//here temporarily convert size to double
	auto gc_content = (gc_count / static_cast<double>(size)) * 100;

	//custom function to round to a desired precision
	return round_to_precision(gc_content, 2);
}

double round_to_precision(double number, int precision)
{
	return (std::round(number * std::pow(10, precision))) / std::pow(10, precision);
}
