#include<iostream>

class Vector{
	public:
		int x, y;
		Vector(){}
		Vector(int a, int b):x(a), y(b){}
		Vector operator + (const Vector&);
};

Vector Vector::operator +( const Vector& param ){
	Vector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
return temp;
}

int main(){
	Vector aa(10, 10);
	Vector bb(10, 10);
	Vector temp;
	temp = aa + bb;
	std::cout << temp.x << "x " << temp.y << "y" << "\n";
}
