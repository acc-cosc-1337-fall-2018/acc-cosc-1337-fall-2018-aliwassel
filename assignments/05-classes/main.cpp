#include"invoice_detail.h"
#include<iostream>

int main() 
{
	InvoiceDetail detail(10, 10);
	std::cout<<detail.get_extended_cost();

	return 0;
}

