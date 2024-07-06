#include <stdio.h>

int main() {
	int N = 0;
	int i = 2;
	scanf("%d", &N);

	while (N > 1) {
		if (N % i == 0) {
			N /= i;
			printf("%d\n", i);
		}
		else
			i++;
	}
	return 0;
}