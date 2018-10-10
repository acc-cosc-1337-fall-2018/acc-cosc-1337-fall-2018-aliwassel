#include"invoice.h"
#include<iostream>
#include"invoice_utility.h"
int main() 
{
	/*InvoiceDetail detail(10, 10);
	detail.get_extended_cost();
	Invoice invoice;
	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	invoice.add_invoice_detail(InvoiceDetail(10, 50));*/

	/*Invoice invoice;
	InvoiceDetail detail;
	std::cin >> detail;
	
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));
	
	Invoice invoice1;
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;

	Invoice result = invoice + invoice1;
	std::cout << result.get_total();
*/
	
	/*std::vector<Invoice> invoices{ invoice, invoice1, invoice3 };
	Invoice result; for (auto i : invoices)
	{
		std::cout << i.get_total() << std::endl;
		result += i;
	}

	std::cout << result.get_total() << std::endl;
	*/

	InvoiceUtility inv(25);
	inv.add_invoice_detail(InvoiceDetail(100, 1));
	std::cout << inv.get_total();
	
	return 0;
}



