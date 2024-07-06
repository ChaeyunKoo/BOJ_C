#include <stdio.h>

int main() {
	int n = 0, max = 0, min = 0;
	int score[1000] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	max = score[0], min = score[0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (max < score[j]) {
				max = score[j];
			}
			if (min > score[j]) {
				min = score[j];
			}
		}
	}
	printf("%d", max - min);
	return 0;
}