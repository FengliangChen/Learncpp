#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string line;
	ifstream myfile ("final_art_work.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	else cout << "unalbe to open file";
	return 0;
}
