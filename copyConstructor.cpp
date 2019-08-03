#include <iostream>
#include <string>

class Example5
{
	std::string* ptr;
public:
	Example5(): ptr(new std::string("testing")){}
	Example5(const std::string& str): ptr(new std::string(str)){}
	~Example5 () {delete ptr;}
	Example5 (const Example5& x): ptr(new std::string(x.content())){}
	const std::string& content() const {return *ptr;}
	// Example5& operator=(const Example5& x){
	// 	delete ptr;
	// 	ptr = new std::string (x.content());
	// 	return *this;
	// }
};

int main()
{
	Example5 haha; //
    Example5 foo ("Example");
    Example5 bar = foo; // object initialization: copy constructor called
    //haha = foo;
    std::cout << "bar content: " << bar.content() << '\n';
    //std::cout << "haha content: " << haha.content() << '\n';
    return 0;
}