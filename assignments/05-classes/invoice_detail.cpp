#include "invoice_detail.h"



double  InvoiceDetail::get_extended_cost()const 
{
	return  cost * units;

}
  



std::istream & operator>>(std::istream & in, InvoiceDetail & d)
{
	in >> d.cost;
	in >> d.units;
	return in;
}
