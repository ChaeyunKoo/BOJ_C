#include <stdio.h>

int main() {
	int N = 0; //바구니의 개수
	int M = 0; //시행 횟수
	int i = 0, j = 0;
	int arr[100] = { 0 };
	int temp[100] = { 0 };

	scanf("%d %d", &N, &M);

	for (int a = 1; a < N + 1; a++) {
		arr[a] = a;
	}

	int l = 0;
	while (l < M) {
		scanf("%d %d", &i, &j);

		int a = i;
		int b = j;
		while (a < j + 1) {
			temp[a] = arr[b];
			a++;
			b--;
		}
		for (int k = i; k < j + 1; k++) {
			arr[k] = temp[k];
		}
		l++;
	}
	for (int a = 1; a < N + 1; a++) {
		printf("%d ", arr[a]);
	}

	return 0;
}