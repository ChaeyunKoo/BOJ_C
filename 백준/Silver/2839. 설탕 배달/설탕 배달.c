#include <stdio.h>

int main() {
	int N = 0;
	int B = -1;
	int flag = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (3 * i + 5 * j == N) {
				B = i + j;
				flag = 1; break;
				//printf("i:%d j:%d\n", i, j);
			}
		}
		if (flag == 1)
			break;
	}

	printf("%d", B);
	return 0;
}