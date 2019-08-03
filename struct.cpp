#include<iostream>
#include<string>

struct Book {
	char title[10];
	char pages[10];
	char author[10];
};


int main(){
 Book smallbook;
 strcpy(smallbook.title, "a domeday");
 strcpy(smallbook.pages, "1111");
 strcpy(smallbook.author, "S.Ross");
 std::cout << smallbook.title << smallbook.pages << smallbook.author << std::endl;
}
