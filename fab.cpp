#include<iostream>
#include<ctime>

long long Fabra(long long);

int main(){
	int start_s = clock();
	for (long long a = 1; a <= 50; a++) {
		std::cout << "iput: " << a << " Fab out: " << Fabra(a) << "\n";
	}
	int stop_s=clock();
	std::cout << "took time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC)*1000 << "ms"<< std::endl;
	return 0;
}

long long Fabra(long long n){
	if (n <= 1 ){
		return 1;
	} else{
		return Fabra(n-1) + Fabra(n-2);
	}
}


