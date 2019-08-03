#include <iostream>
#include <string>

int main(){
	std::string a;
	a = std::string("hellow");
	std::string* b;
	b = new std::string("hellow"); /* the new is overloaded operator, returns pointer pointed to the texts.*/
	std::cout << "a adrees:" <<  &a << "value:" << a << '\n';
	std::cout << "a adrees:" <<  b << "value:" << *b << '\n';
	return 0;
}

/*
+    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
<<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new 
delete    new[]     delete[]
*/
