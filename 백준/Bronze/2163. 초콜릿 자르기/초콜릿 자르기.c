#include <stdio.h>

int main() {
	int n = 0;
	int m = 0;
	int result = 0;

	scanf("%d %d", &n, &m);

	result = n * m - 1;

	if (n == 1 && m == 1) {
		result = 0;
	}
	printf("%d", result);
	return 0;
}