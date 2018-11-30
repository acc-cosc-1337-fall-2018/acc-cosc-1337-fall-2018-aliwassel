#include<vector>
#include<string>
#include<iostream>
using namespace std;

int sum_numbers(int num1, int num2);

//write function prototype for multiply_numbers with two integer parameters


int multiply_numbers(int num1, int num2);

void pass_by_val_by_ref(int val, int& ref);


void pass_by_pointer(int* ptr);

void initialize_vector_of_ints();

void initialize_vector_of_strings();


#ifndef MY_CLASS_H
#define MY_CLASS_H

class MyClass
{
public:
	MyClass();
	MyClass(MyClass& my_class ); //rule of 3 copy constructor 
	MyClass& operator=(MyClass other); // rule of 3  overload
	void set_ptr_unum(int val);
	~MyClass(); // rule of 3 destructor 
private:
	int num{ 5 };
	int* ptr_num = new int(10);


};
#endif // !MY_CLASS_H
