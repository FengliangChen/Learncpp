#include<iostream>

//class Square; 当 Rectangle放在Square之前时，要声明。

class Square {
	friend class Rectangle;
	private:
	int side;
	public:
	Square (int a): side(a) {}
};

class Rectangle {
	int width, height;
	public:
	int area()
	{return (width * height);}
	void convert( const Square& a );
};

void Rectangle::convert ( const Square& a){
	width = a.side;
	height = a.side;
}

int main(){
	Rectangle rect; /*当有其他它constructor时候，要做空的constructor,Rectangle(){} */
	Square sqr(4);
	rect.convert(sqr);
	std::cout << rect.area();
	return 0;
}
