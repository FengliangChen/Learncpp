#include<iostream>

template <typename T> 
void print(T n)
{
	std::cout << "Here is the value: " << n << "\n";
}


int main(){
	float value = 100.f;
	print(value);
	print2(value);
}

