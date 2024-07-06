#include <stdio.h>

int main() {
	int T = 0; //테스트 케이스 개수
	int mon[] = { 25,10,5,1 }; //각각의 거스름돈을 센트로 변환한 값.
	int result[4] = { 0 }; //거스름돈 각각의 개수
	int C = 0;

	scanf("%d", &T);
	int i = 0;
	while (i < T) {
		scanf("%d", &C);

		for (int j = 0; j < 4; j++) {
			while (C >= mon[j]) {
				C -= mon[j];
				result[j]++;

				if (C == 0)
					break;
			}
		}
		for (int k = 0; k < 4; k++) {
			printf("%d ", result[k]);
			result[k] = 0; //초기화
		}
		printf("\n");
		i++;
	}
	return 0;
}