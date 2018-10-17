
#include<iostream>
#include"invoice_utility.h"
#include"invoice_progress.h"
#include<vector>
#include<shape.h>
#include<memory>
using namespace std;

int main()
{
	/*std::unique_ptr <Shape> line = {std::make_unique<Line>(), std::make_unique<Circle>()};
	line->draw();*/

	/*vector <Shape*> Shapes ( std::make_unique<Line>(), std::make_unique<Circle> ()};
	for (auto shape : Shapes)
	{

		shape->draw();
	}*/
	vector < unique_ptr<Shape>>shapes;
	shapes.push_back(std::make_unique<Line>());
	shapes.push_back(std::make_unique<Circle>());
	for (auto & shape : shapes)
	{
		shape->draw();
	}
	//}

	//

	//	// create instance of InvoiceUtility
	//InvoiceUtility invu(25);
	//invu.add_invoice_detail(InvoiceDetail(100, 1));
	//




	//InvoiceProgress  invp(250);
	//invp.add_invoice_detail(InvoiceDetail(100, 1));

	//std::cout << invu.get_total() << std::endl;

	//std::cout << invu.get_total() << std::endl;

	//
	//
	//Invoice& u = invu;
	//Invoice& p = invp;

	//
	//std::cout << u.get_total() << "\n";
	//std::cout << p.get_total() << "\n";
	system("pause");
	return 0;
}




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

//InvoiceUtility inv(25);
//inv.add_invoice_detail(InvoiceDetail(100, 1));
//std::cout << inv.get_total();

//
//std::vector<Invoice> invoices{ invoice, invoice1, invoice3 };
//Invoice result; 
//for (auto i : invoices)
//{
//	std::cout << i.get_total() << std::endl;
//	result += i;
//}

//std::cout << result.get_total() << std::endl;

//	class Shape
//	{
//	public:
//		virtual void draw() {}// in run call the each rquested method not Base.
//	};
//
//	class Line : public Shape // inheritance 
//	{
//	public:
//		void draw() { std::cout << "y=mx+b"; }
//	};
//
//	class Circle : public Shape
//	{
//	public:
//		void draw() { std::cout << "pi r square"; }
//
//	};
//
//	int main()
//	{
//		std::vector<std::reference_wraper<Shape>> shapes;
//		Line line;
//		Circle c;
//		shapes.push_back(line);
//		shapes.push_back(c);
//		for (auto shape : shapes) {shape.draw()}
//	}
//
//
//	

