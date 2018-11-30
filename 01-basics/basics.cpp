#include "basics.h"


int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
int multiply_numbers(int num1, int num2)
{
	return num1*num2;
}

void pass_by_val_by_ref(int val, int& ref)
{
	val = 99;
	ref = 99;
}

void pass_by_pointer(int * ptr)
{
	*ptr = 99;
}

void initialize_vector_of_ints()
{
	
	std::vector <int> numbers = { 5, 9,7,4,6,8 };
}

void initialize_vector_of_strings()
{
}

MyClass::MyClass()
{
	cout << "Constructor" << endl;
}

MyClass::MyClass(MyClass & my_class)
{
	ptr_num = new int(*my_class.ptr_num);
}

MyClass & MyClass::operator=(MyClass other)
{
	ptr_num = new int(*other.ptr_num);

	return*this;

}

void MyClass::set_ptr_unum(int val)
{
	*ptr_num = val;
}

MyClass::~MyClass()
{
	cout <<"Num "<<num <<"Ptr_num"<< * ptr_num<<" addreess "<< ptr_num <<"  " << "Destructor" << endl;
}
