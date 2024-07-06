#include <stdio.h>

int main() {

	int N = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < N - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= N; i++) {
		for (int j = N - i; j < N; j++) {
			printf(" ");
		}
		for (int j = 2 * i - 1; j < 2 * N - 2; j++) {
			printf("*");
		}
		printf("\n");
	}
}