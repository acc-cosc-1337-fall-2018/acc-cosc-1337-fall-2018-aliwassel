#ifndef INVOICE_DETAIL_H
#define INVOICE_DETAIL_H

class InvoiceDetail {
public:
	InvoiceDetail(double c, int u) {}
	double get_extended_cost();
private:
	double cost;
	int unit;
};
#endif

