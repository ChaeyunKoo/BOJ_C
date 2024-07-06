#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	int max = 0, sum = 0;

	scanf("%d %d %d", &a, &b, &c);
	if (a > max) max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	sum = a + b + c - max;

	if (sum > max) printf("%d", sum + max);
	else {
		max = sum - 1;
		printf("%d", sum + max);
	}

	return 0;
}