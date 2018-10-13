#define CATCH_CONFIG_MAIN
#include"catch.hpp"
#include "invoice.h"
#include "invoice_utility.h"
#include"invoice_progress.h"

TEST_CASE("Test config") 
{
	InvoiceDetail detail(10, 10);

	REQUIRE(detail.get_extended_cost() == 100);



}

TEST_CASE("Test invoice get total")
{
	Invoice invoice;
	InvoiceDetail d(10, 10);
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	REQUIRE(invoice.get_total() == 325);

}

TEST_CASE("Test invoice operator overloading")
{
	Invoice invoice;
	InvoiceDetail d(10, 10);
	invoice.add_invoice_detail(d);
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));
	
	Invoice invoice1;
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;
	REQUIRE(result.get_total() == 525);
}

TEST_CASE("Test invoiceUtility get total") 
{
	// create instance of InvoiceUtility
	InvoiceUtility inv(25);
	inv.add_invoice_detail(InvoiceDetail(100, 1));
	REQUIRE(inv.get_total() == 125);
}

TEST_CASE("Test Invoice_progress get total") 
{
	InvoiceProgress inv(250);
	inv.add_invoice_detail(InvoiceDetail(100, 1));

	REQUIRE(inv.get_total() == 150);
}