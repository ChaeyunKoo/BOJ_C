#include <stdio.h>

int main() {
	int a1 = 0, a2 = 0, a3 = 0;
	int next = 0;

	while (1) {
		scanf("%d %d %d", &a1, &a2, &a3);

		if (a1 == 0 && a2 == 0 && a3 == 0)
			break;

		if (a2 - a1 == a3 - a2) {
			next = a3 + (a2 - a1);
			printf("AP %d\n", next);
		}
		else if (a3 / a2 == a2 / a1) {
			next = a3 * a2 / a1;
			printf("GP %d\n", next);
		}
	}
	return 0;
}