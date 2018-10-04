#define CATCH_CONFIG_MAIN
#include"catch.hpp"
#include "invoice.h"

TEST_CASE("Test get_extended_cost") {

	InvoiceDetail detail(10,10);

	REQUIRE(detail.get_extended_cost() == 100);

	
	
}

TEST_CASE("Test get total invoice")
{
	Invoice invoice;
	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));
	REQUIRE(invoice.get_total() == 325);
}


