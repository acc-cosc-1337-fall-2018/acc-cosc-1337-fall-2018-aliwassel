#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
public:
	virtual void draw() {}
};

class Line : public Shape
{
public:
	void draw() { std::cout << "Line"; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "Circle"; }

};




#endif // !SHAPE_H
