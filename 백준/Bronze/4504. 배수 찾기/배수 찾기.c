#include <stdio.h>

int main() {
	int n = 0;
	int d = 0;

	scanf("%d", &n);

	while (1) {
		scanf("%d", &d);

		if (d == 0)
			break;

		if (d % n == 0) {
			printf("%d is a multiple of %d.\n", d, n);
		}
		else
			printf("%d is NOT a multiple of %d.\n", d, n);
	}
	return 0;
}