#include<iostream>
#include<string>
#include<vector>
#include"basics.h"
#include<memory>
using namespace std;
using std::cout;

int main()
{
	std::string value = "AAAACCCGGT";
	std::string result;
	value.replace(1, 1, "X");

	std::cout << value << endl;
	int num = 10;
	pass_by_pointer(&num);
	
	cout << num << endl;
	
	MyClass my_class; // destructor runs when program exists; c++ default constructor & destructor.

	MyClass a = my_class; // c++ free = operator overload
	a.set_ptr_unum(1000); // copies same address

	//MyClass* ptr_cls = new MyClass();// set class on the heap
	//ptr_cls->set_ptr_unum(50);
	//delete ptr_cls;
	//ptr_cls = nullptr; // releasing memory 
	
	unique_ptr<MyClass> ptr_cls = std::make_unique <MyClass>();  // smart pointer
	ptr_cls->set_ptr_unum(50);

	MyClass ptr_cls1 = *ptr_cls;
	ptr_cls1.set_ptr_unum(100);



	return 0;
	
}
