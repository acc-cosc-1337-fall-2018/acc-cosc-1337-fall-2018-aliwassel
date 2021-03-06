#ifndef INVOICE_DETAIL_H
#define INVOICE_DETAIL_H
#include<iostream>

class InvoiceDetail {
public:
	InvoiceDetail() = default; //ask c++ to create default constructor

	InvoiceDetail(double c, int u): cost(c), units(u) {}
	double get_extended_cost() const;
	friend std::istream & operator>>(std::istream & in, InvoiceDetail & d);
private:
	double cost;
	int units;
};
#endif//! INVOICE_DETAIL_H

