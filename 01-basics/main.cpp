#include<iostream>
#include<string>
#include<vector>
using namespace std;
using std::cout;

int main()
{
	std::string value = "AAAACCCGGT";
	std::string result;
	value.replace(1, 1, "X");

	std::cout << value << endl;

	return 0;
}
