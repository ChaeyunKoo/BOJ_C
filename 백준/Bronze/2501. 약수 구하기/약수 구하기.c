#include <stdio.h>

int main() {
	int n = 0;
	int k = 0;
	int count = 0;
	int result = 0;

	scanf("%d %d", &n, &k);

	for (int i = 1; i < n + 1; i++) {
		if (n % i == 0) {
			count++;
			if (count == k) {
				result = i;
			}
		}
	}
	printf("%d", result);
	return 0;
}