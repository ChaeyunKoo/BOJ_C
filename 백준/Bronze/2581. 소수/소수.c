#include <stdio.h>

int main() {
	int M = 0, N = 0;
	int min = 0;
	int sum = 0;
	int on = 0;

	scanf("%d", &M);
	scanf("%d", &N);

	int i = M;
	int now = M;
	while (i <= N) {
		for (int j = 2; j < now; j++) {
			if (now % j == 0) { //소수가 아님.
				on = 0;
				break;
			}
			else {
				on = 1;
			}
		}
		if (on == 1 || now == 2) {
			//printf("%d ", now);
			sum += now;
			if (min == 0) {
				min = now;
			}
		}
		now++;
		i++;
	}
	//printf("\n");
	if (sum == 0) //소수가 없는 경우
		printf("-1");
	else {
		printf("%d\n", sum);
		printf("%d", min);
	}
	return 0;
}