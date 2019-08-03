#include<iostream>

int main(){
	int c =10; int d = 10;
	int& a = c; int& b = d;
	std::cout << a << " <> " << b << "\n";
}
