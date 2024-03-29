#include <iostream>

class Polygon{
	protected:
		int width, height;
	public:
		void set_values (int a, int b)
		{ width = a; height = b; }
		virtual int area()
		{ return 0; }
};

class Retangle: public Polygon {
	public:
		int area()
		{ return width * height; }
};

class Triangle: public Polygon {
	public:
		int area()
		{ return (width * height / 2); }
};

int main(){
	Retangle rect;
	Triangle trgl;
	Polygon poly;
	Polygon * ppoly1 = &rect;
	Polygon * ppoly2 = &trgl;
	Polygon * ppoly3 = &poly;
	ppoly1 -> set_values(4,5);
	ppoly2 -> set_values(4,5);
	ppoly3 -> set_values(4,5);
	std::cout << ppoly1->area() << '\n';
	std::cout << ppoly2->area() << '\n';
	std::cout << ppoly3->area() << '\n';
	return 0;
}
