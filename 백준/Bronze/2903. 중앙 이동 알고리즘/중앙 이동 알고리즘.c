#include <stdio.h>
#include <math.h>
int main() {
	int N = 0;
	int result = 0;

	scanf("%d", &N);
	result = pow((pow(2, N) + 1), 2);

	printf("%d", result);
	return 0;
}