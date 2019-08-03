#include <time.h>
#include <stdio.h>
int main(void) {
	clock_t tStart = clock();
	for (int testN = 0; testN < 1000000; testN++) {
		printf("%d\n", testN);
	}
	printf("time Taken: %.2fs\n", ((double)(clock() - tStart)/CLOCKS_PER_SEC));
	return 0;
}
