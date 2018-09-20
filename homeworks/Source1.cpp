#include <iostream>
#include<string>
using namespace std;

std::string get_dna_complement(std::string dna)
{
	dna = "AAAACCCGGT";

	std::string dna_not_reverse = dna;
	std::string dna_reverse = "";
	std::string result;
	for (unsigned int i = dna_not_reverse.length() - 1; i != -1; --i)
	{
		dna_reverse += dna_not_reverse[i];



		result.replace(9, 1, "A");
		result.replace(8, 1, "C");
		result.replace(7, 1, "C");
		result.replace(6, 1, "G");
		result.replace(5, 1, "G");
		result.replace(4, 1, "G");