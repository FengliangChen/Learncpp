#include<iostream>

class Circle {
	double radius;
	public:
	Circle(double r): radius(r){}
	double area(){return radius*radius*3.1415926;}
};

class Cylinder {
	Circle base;
	double height;
	public:
	Cylinder(double r, double h): base(r), height(h){}
	double volume(){return base.area()*height;}
};

int main(){
	Cylinder foo (10,20);
	std::cout << "foo's volume: " << foo.volume() << '\n';
}
