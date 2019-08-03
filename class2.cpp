#include<iostream>

class Rectangle {
	int width, height;
	public:
	void set_value(int, int);
	int area(){ return width*height; };
};

void Rectangle::set_value(int x, int y){
	width = x;
	height = y;
}

int main(){
	Rectangle rect, rectb;
	rect.set_value(10,12);
	rectb.set_value(10,10);
	std::cout << rect.area() << "\n";
	std::cout << rectb.area() << "\n";
	return 0;
}
