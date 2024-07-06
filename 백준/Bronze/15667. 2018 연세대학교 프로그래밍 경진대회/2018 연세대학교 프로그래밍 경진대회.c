#include <stdio.h>

int main() {
	int k = 0, n = 0;

	scanf("%d", &n);
	int i = 1;
	while (1) {
		if (i * i + i + 1 == n) {
			k = i;
			break;
		}
		i++;
	}
	printf("%d", k);
	return 0;
}