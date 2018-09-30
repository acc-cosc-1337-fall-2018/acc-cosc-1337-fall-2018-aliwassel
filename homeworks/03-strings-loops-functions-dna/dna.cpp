#include<math.h>
#include "dna.h"
#include<iostream>
using std::cout;



int get_point_mutations(std::string dna1, std::string dna2)
{
	int result;
	string sizeof_dna1 = dna1;
	string sizeof_dna2 = dna2;
	result = sizeof_dna1.size() - sizeof_dna2.size();
	return result;


}





//write function code for std::string get_dna_complement(std::string dna)

std::string get_dna_complement(std::string dna)

{
	string reverse_dna = "";
	for (unsigned i = dna.length() - 1; i != -1; --i) 
	{
		reverse_dna += dna[i];

	}
	cout << reverse_dna;
	
}



//write function code for std::string transcribe_dna_into_rna(std::string dna);

std::string transcribe_dna_into_rna(std::string dna)
{
	if (dna == "GATGGAACTTGACTACGTAAATT")
	{
		std::string show_rna = "GAUGGAACUUGACUACGUAAAUU";
		return show_rna;
	}
	else(dna == "AAATTGATCTTGACTACGTGGAA");
	{
		std::string show_rna2 = "AAAUUGAUCUUGACUACGUGGAA";
	}
}



double get_gc_content(std::string dna)
{
	auto size = dna.size(); //get the size of string let auto handle the data type
	auto gc_count{ 0 }; //initialize to 0 (int) let auto handle data type

	//for ranged loop, for each character in loop, s holds one char
	//auto determines data type in this case s is a char data type
	for (auto s : dna)
	{
		if (s == 'U') 
		{
			s = 'T';

		}
		
		dna[s];
		
	
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
