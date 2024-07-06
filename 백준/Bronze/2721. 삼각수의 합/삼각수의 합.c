#include <stdio.h>

int main() {
	int n = 0;
	int T = 0; //테스트 케이스 개수
	int sum = 0;
	int Tn = 0;

	scanf("%d", &T);

	int i = 0;
	while (i < T) {
		scanf("%d", &n);

		for (int k = 1; k <= n; k++) {
			for (int j = 1; j <= k + 1; j++) {
				Tn += j;
			}
			sum += k * Tn;
			Tn = 0;
		}
		printf("%d\n", sum);
		sum = 0;
		i++;
	}
	return 0;
}