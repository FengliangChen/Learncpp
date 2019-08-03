#include <iostream>
#include <cmath>
void simon(int);

int main()
{
	std::cout << "hello world!" <<std::endl;
	double meme;
	std::cout << "please input your value.\n";
	std::cin >> meme;
	double result;
	result = sqrt(meme);
	std::cout << "your vavle is " << result
		<< "end\n";
	int count;
	std::cin >> count;
	simon(count);
}

void simon(int n)
{
	std::cout << "simon says add " << n << " dollers\n";
}
