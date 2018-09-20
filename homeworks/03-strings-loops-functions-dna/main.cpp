//write the dna.h include statement here
#include"dna.h"


int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	
	
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG");
	cout<<point_mutation;
	auto com_dna = get_dna_complement("AAAACCCGGT");
	cout << com_dna;
	auto com_dna2= get_dna_complement("CCCGGAAAAT");

	auto show_rna = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
	cout << show_rna;
	auto show_rna2= transcribe_dna_into_rna("AAATTGATCTTGACTACGTGGAA");
	cout << show_rna2;

	
}