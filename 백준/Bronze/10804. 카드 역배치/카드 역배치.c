#include <stdio.h>

int main() {
	int a, b;
	int card[20] = { 0 };
	int tmp = 0;

	for (int i = 0; i < 20; i++) {
		card[i] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &a, &b);
		for (int j = 0; j < (b - a + 1) / 2; j++) {
			tmp = card[a + j - 1];
			card[a + j - 1] = card[b - j - 1];
			card[b - j - 1] = tmp;
		}
		tmp = 0;
	}
	for (int i = 0; i < 20; i++)
		printf("%d ", card[i]);
	return 0;
}