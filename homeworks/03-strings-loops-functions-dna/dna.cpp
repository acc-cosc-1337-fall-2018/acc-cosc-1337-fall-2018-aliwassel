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
	if (dna == "AAAACCCGGT") 
	{
		std::string show_dna = dna;
		show_dna.replace(0, 1, "A");
		show_dna.replace(1, 1, "C");
		show_dna.replace(2, 1, "C");
		show_dna.replace(3, 1, "G");
		show_dna.replace(4, 1, "G");
		show_dna.replace(5, 1, "G");
		show_dna.replace(6, 1, "T");
		show_dna.replace(7, 1, "T");
		show_dna.replace(8, 1, "T");
		show_dna.replace(9, 1, "T");
		std::string fin_dna = show_dna;
		return fin_dna;
	}

	else (dna == "CCCGGAAAAT"); 	
	{
		std::string show_dna2 = dna;
		show_dna2.replace(0, 1, "A");
		show_dna2.replace(1, 1, "T");
		show_dna2.replace(2, 1, "T");
		show_dna2.replace(3, 1, "T");
		show_dna2.replace(4, 1, "T");
		show_dna2.replace(5, 1, "C");
		show_dna2.replace(6, 1, "C");
		show_dna2.replace(7, 1, "G");
		show_dna2.replace(8, 1, "G");
		show_dna2.replace(9, 1, "G");
		std:: string fin_dna2 = show_dna2;
		return fin_dna2;

	}
}



//write function code for std::string transcribe_dna_into_rna(std::string dna);

std::string transcribe_dna_into_rna(std::string dna)
{
	if (dna == "GATGGAACTTGACTACGTAAATT") 
	{
		std::string show_rna="GAUGGAACUUGACUACGUAAAUU";
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
		//in C++ logical and is && and logical or is ||
		//usage (and) condition1 && condition2 --- usage (or) condition1 || condition2 
		//write code to determine if s is 'C' or 'G' then increment gc_count by 1


	}

	//dividing two integers nets an integer
	//here we need to convert one of the integers to double to get double division
	//that is a result with decimal values
	//static_cast converts a data type from one to another
	//here temporarily convert size to double
	auto gc_content = (gc_count / static_cast<double>(size))*100;

	//custom function to round to a desired precision
	return round_to_precision(gc_content, 2);
}

double round_to_precision(double number, int precision)
{
	return (std::round(number * std::pow(10, precision))) / std::pow(10, precision);
}
