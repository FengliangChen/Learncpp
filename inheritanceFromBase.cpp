#include<iostream>

class Mother {
	public:
		Mother(){ std:: cout << "Mother: no parameters \n"; }
		Mother(int a) { std:: cout << "Mother: int parameters\n" ;}
};

class Daughter: public Mother {
	public:
		Daughter(int a)  /*Even though access to the constructors and destructor of the base class is not inherited as such, they are automatically called by the constructors and destructor of the derived class.*/
		{std::cout << "Daughter: int parameters \n\n";}
};

class Son: public Mother {
	public:
		Son (int a): Mother (a)
			{std::cout << "Son:int parameter \n\n"; }
};

int main(){
	Daughter kelly(0);
	Son bud(0);
	return 0;
}
