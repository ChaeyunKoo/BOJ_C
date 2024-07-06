#include <stdio.h>

int arr[101];
int copy[101];
int result[101];
int main() {
	int n = 0, m = 0; //바구니 총 개수, 총 회전수
	int i = 0, j = 0, k = 0; //시작, 끝, 기준
	int begin = 0;

	scanf("%d %d", &n, &m);
	/*바구니 순서*/
	for (int a = 1; a <= n; a++) {
		arr[a] = a;
		result[a] = a;
	}
	 /*총 m번 회전*/
	int b = 0;
	while (b < m) {
		scanf("%d %d %d", &i, &j, &k);
		begin = i;

		for (int c = i; c <= j; c++) {
			//바구니가 end번째를 넘어갈 경우
			//다시 begin부터 채워넣음
			if (c + (k - i) > j) {
				copy[c] = result[begin];
				begin++;
			}
			//end번째를 넘어가기 전까지는
			//기준이 되는 mid번째부터 채워넣음
			else {
				copy[c] = result[c + (k - i)];
			}
		}
		for (int c = 1; c <= n; c++) {
			if (c < i || c > j) {
				copy[c] = result[c];
			}
		}
		for (int b = 1; b <= n; b++) {
			result[b] = copy[b];
		}
		b++;
	}
	for (int b = 1; b <= n; b++) {
		printf("%d ", copy[b]);
	}
	return 0;
}