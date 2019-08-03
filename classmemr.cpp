#include<iostream>

class Circle {
	double radius;
	public:
	Circle(double r):radius(r){}
	double area(void) { return radius * radius * 3.1415926 ;}
};

class Cylinder {
	Circle base;
	double height;
	public:
	Cylinder(double r, double h): base(r), height(h){}
	double volume(void){return base.area()*height;}
};

int main(){
	Cylinder cyl(10, 10);
	std::cout << "volume of cylinder:" << cyl.volume() << '\n';
}


