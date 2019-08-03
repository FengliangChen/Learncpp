#include<iostream>
void  pass(int *p);

int main(){
	int a = 100;
	pass(&a);
	std::cout << "a " << a << "\n";
}

void  pass(int *p){
	*p = *p + 100;
	std::cout<< p <<" and " << *p << "\n";
	return;
}
