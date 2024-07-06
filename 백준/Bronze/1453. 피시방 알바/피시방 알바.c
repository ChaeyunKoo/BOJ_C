#include <stdio.h>

int main() {
	int n = 0;
	int num[100] = { 0 };
	int result[101] = { 0 };
	int count = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 1; i <= 100; i++) {
		for (int j = 0; j < n; j++) {
			if (i == num[j]) {
				result[i]++;
			}
		}
	}
	for (int i = 1; i <= 100; i++) {
		if (result[i] > 1) {
			count += result[i] - 1;
		}
	}
	printf("%d", count);
	return 0;
}