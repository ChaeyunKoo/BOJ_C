#include <stdio.h>

int main() {
	int N = 0; //바구니의 개수(공의 번호)
	int M = 0; //공을 넣는 횟수
	int arr[100] = { 0 };
	int i = 0, j = 0, k = 0;

	scanf("%d %d", &N, &M);

	int l = 0;
	while (l < M) {
		scanf("%d %d %d", &i, &j, &k);
		for (int a = i; a < j + 1; a++) {
			arr[a] = k;
		}
		l++;
	}
	for (int a = 1; a < N + 1; a++) {
		printf("%d ", arr[a]);
	}
	return 0;
}