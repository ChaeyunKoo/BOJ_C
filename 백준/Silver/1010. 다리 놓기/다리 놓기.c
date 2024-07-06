#include <stdio.h>

int main() {
	int T = 0, N = 0, M = 0;
	double fac_N = 1.0, fac_M = 1.0, fac_mi = 1.0; //조합 수식에 의거하여 N의 팩토리얼, M의 팩토리얼, M-N의 팩토리얼에 대한 변수 선언
	double result = 0;

	scanf("%d", &T);
	int i = 0;
	while (i < T) {
		scanf("%d %d", &N, &M);

		for (float j = 1.0; j <= N; j++) {
			fac_N *= j;
		}
		for (float k = 1.0; k <= M; k++) {
			fac_M *= k;
		}
		for (float l = 1.0; l <= M-N; l++) {
			fac_mi *= l;
		}
		result = fac_M / (fac_N * fac_mi);
		printf("%.f\n", result);
		fac_N = 1, fac_M = 1, fac_mi = 1, result = 0;
		i++;
	}
	return 0;
}