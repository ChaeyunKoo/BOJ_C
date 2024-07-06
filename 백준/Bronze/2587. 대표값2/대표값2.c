#include <stdio.h>

int main() {
	int a[5] = { 0 };
	int sum = 0;
	int avg = 0;
	int med = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	avg = sum / 5;
	for (int i = 0; i < 5; i++) {
		int tmp = 0;
		for (int j = 0; j < 5; j++) {
			if (a[i] < a[j]) {
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	med = a[2];
	printf("%d\n%d\n", avg, med);
	return 0;
}