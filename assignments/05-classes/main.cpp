#include"invoice.h"
#include<iostream>
int main() 
{
	InvoiceDetail detail(10, 10);
	detail.get_extended_cost();
	Invoice invoice;
	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	invoice.add_invoice_detail(InvoiceDetail(10, 50));

	Invoice invoice;
	InvoiceDetail deail;
	std::cin >> detail;
	
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));
	
	Invoice invoice1;
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;

	Invoice result = invoice + invoice1;
	std::cout << result.get_total();

	
	
	


	return 0;
}

