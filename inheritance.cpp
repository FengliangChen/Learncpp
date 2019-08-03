#include<iostream>

class Polygon {
	protected: /*the members from derived classed can access the protected members inherited form the base classes, but not its private members*/
	int width, height;
	public:
	void set_values (int a, int b)
	{width=a; height=b;}
};

class Rectangle: public Polygon { /* the access level is public, so will derive the most access level.*/
	public:
		int area(){ return width * height; }
}; 

class Triangle: public Polygon {
	public:
		int area(){return width * height/2;}
};

int main(){
	Rectangle rect;
	Triangle trgl;
	rect.set_values(2,3);
	trgl.set_values(2,3);
	std::cout << rect.area() << '\n';
	std::cout << trgl.area() << '\n';
	return 0;
}
