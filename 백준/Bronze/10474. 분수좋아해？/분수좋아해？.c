#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	while (1) {
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
			break;

		printf("%d %d / %d\n", a / b, a % b, b);
	}
	return 0;
}