#include <stdio.h>

int main() {
	int n = 0;
	int num[100] = { 0 };
	int count = 0;
	int result[100] = { 0 };
	int real_count = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= num[i]; j++) {
			if (num[i] % j == 0) {
				count++;
			}
		}
		result[i] = count;
		count = 0;
	}
	for (int i = 0; i < n; i++) {
		if (result[i] == 2) {
			real_count++;
		}
	}
	printf("%d", real_count);
	return 0;
}