#include <stdio.h>

int main() {
	int n = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) { //세로 줄
		for (int j = 0; j < n; j++) { //가로 줄
			printf("*");
			if (j != n - 1) {
				printf(" ");
			}
		}
		if (i != n - 1) {
			printf("\n");
		}
		if (i % 2 == 0) {
			printf(" ");
		}
	}
	return 0;
}