#include <stdio.h>

int main() {
	int N = 0; //트로피의 개수
	int high[51] = { 0 }; //각 트로피의 높이
	int max = 0;
	int count = 1;

	scanf("%d", &N);

	for (int j = 0; j < N; j++) {
		scanf("%d", &high[j]);
	}

	int i = 0;
	max = high[0];
	while (i < N) { //왼쪽에서 봤을 때
		if (high[i] > max) {
			max = high[i];
			count++;
		}
		i++;
	}
	printf("%d\n", count);

	count = 1, i = N - 1, max = high[N - 1];
	while (i >= 0) { //오른쪽에서 봤을 때
		if (high[i] > max) {
			max = high[i];
			count++;
		}
		i--;
	}
	printf("%d", count);
	return 0;
}