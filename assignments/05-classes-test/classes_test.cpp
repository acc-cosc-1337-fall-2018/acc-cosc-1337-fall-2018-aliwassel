#define CATCH_CONFIG_MAIN
#include"catch.hpp"
#include"invoice_detail.h"

TEST_CASE("Test get_extended_cost") {

	InvoiceDetail detail(10,10);

	REQUIRE(detail.get_extended_cost() == 100);

}



