#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

namespace acc

{
	class Rectangle : public Shape
	{
	public:

		Rectangle(wxDC* cd, Point p, int w, int h)
			: Shape(dc), point(p), width(w), height(h) {}
		void draw() override;

	private:
		Point point;
		int width;
		int height;


	};
	#end

}


if // !RECTANGLE_H
