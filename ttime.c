#include <time.h>
#include <stdio.h>
int main(void) {
	clock_t tStart = clock();
	int testN = 0;
	while(testN < 1000000){
		printf("%d\n", testN);
		testN++;
	}
	double tEnd = (clock() - tStart)/CLOCKS_PER_SEC;
	printf("time Taken: %.2fs\n", tEnd);
	return 0;
}
