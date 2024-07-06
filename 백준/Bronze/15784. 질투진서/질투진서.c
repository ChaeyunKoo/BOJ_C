#include <stdio.h>

int arr[1000][1000];

int main() {
	int n = 0;
	int a = 0, b = 0;
	int jin = 0;
	int res = 0;

	scanf("%d %d %d", &n, &a, &b);

	for (int i = 0; i < n; i++) { //세로
		for (int j = 0; j < n; j++) { //가로
			scanf("%d", &arr[i][j]);
		}
	}
	jin = arr[a - 1][b - 1];

	for (int i = 0; i < n; i++) {
		if (arr[a - 1][i] > jin) {
			printf("ANGRY");
			return 0;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i][b - 1] > jin) {
			printf("ANGRY");
			return 0;
		}
	}
	printf("HAPPY");
	return 0;
}