#include"dna.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	
	std:: string dna_sample_1 = "GAGCCTACTAACGGAT";
	std::string dna_sample_2 = "GATCGTAATGACGG";
	std::cout << "DNA sample 1: " << dna_sample_1 << "\n";
	std::cout << "DNA sample 2: " << dna_sample_2 << "\n";
	auto point_mutation = get_point_mutations(dna_sample_1, dna_sample_2);
	std::cout << "DNA Point Mutation :" << point_mutation << "\n\n";

	// show point mutation sample 2
	dna_sample_2 = "GAGCCTACTAACCGGGAT";
	auto point_mutation = get_point_mutations(dna_sample_1, dna_sample_2);
	std::cout << "DNA sample 1: " << dna_sample_1;
	std::cout << "DNA sample 2 :" << dna_sample_2;
	std::cout << "DNA point mutation: " << point_mutation << "\n\n";


	//show point mutation sample 3
	dna_sample_2"GATCGTAATGACGGCAT";
	std::cout << "DNA smaple 1:" << dna_sample_1 << endl;
	std::cout << "DNA smaple 2:" << dna_sample_2 << "\n";
	auto point_mutation = get_point_mutations(dna_sample_1, dna_sample_2);
	cout << "DNA point mutation:" << point_mutation << "\n\n";
	


	//show point mutation sample 4
	dna_sample_2 = "CATCGAATGACGGCCT";
	std::cout << "DNA sample 1: " << dna_sample_1 << "\n";
	std::cout << "DNA sample 2 " << dna_sample_2 << "\n";
	auto point_mutation = get_point_mutations(dna_sample_1, dna_sample_2);
	cout << "DNA point mutation" << point_mutation << "\n\n";


	//show  DNA_complement 
	std::string dna_sample3 = "AAAACCCGGT";
	std::cout << "DNA sample 3" << dna_sample3 << endl;
	auto dna_comp = get_dna_complement(dna_sample3);
	std::cout << "DNA complement" << dna_comp << "\n\n";


		auto com_dna = get_dna_complement("AAAACCCGGT");
	
	auto com_dna2= get_dna_complement("CCCGGAAAAT");

	auto show_rna = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
	cout << show_rna;
	auto show_rna2= transcribe_dna_into_rna("AAATTGATCTTGACTACGTGGAA");
	cout << show_rna2;
	//show  DNA_complement 3
	dna_sample3 = "CCCGGAAAT";
	std::cout << "DNA sample 3" << dna_sample3 << endl;
	std::cout<<"DNA complement"<< get_dna_complement(dna_sample3) << "\n\n";

	//show rna
	std::string rna_sample = "AAATTGATCTTGACTACGTGGAA";
	std::cout << "DNA smaple 4:" << rna_sample << "\n";
	std::cout << "     RNA:   " << transcribe_dna_into_rna(rna_sample) << "\n\n";

		
	//show gc_count 

	std::string dna_sample5 = " CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT";
	std::cout << "DNA sample 5: " << dna_sample5 << "\n";
	std::cout << "GC content of DNA :" << get_gc_content(dna_sample5) << "\n";
	return 0;
