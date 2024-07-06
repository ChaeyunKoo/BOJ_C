#include <stdio.h>

int main() {
	int n = 0;
	int score = 0;
	int result[100] = { 0 };
	int count = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &result[i] );
	}

	for (int i = 0; i < n; i++) {
		if (result[i] == 1) {
			count++;
			score += count;
		}
		else if (result[i] == 0) {
			count = 0;
		}
	}
	printf("%d", score);
	return 0;
}