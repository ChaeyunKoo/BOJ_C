#include <stdio.h>

int main() {
	int c;
	double n;
	int a[1000] = { 0 };
	double sum = 0;
	double avg = 0;
	double count = 0;
	double result = 0;

	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		int j = 0;
		while (1) {
			scanf("%d", &a[j]);
			if (j == a[0])
				break;
			j++;
		}
		n = a[0];
		for (int j = 1; j <= n; j++) {
			sum += a[j];
		}
		avg = sum / n;
		for (int j = 1; j <= n; j++) {
			if (a[j] > avg) {
				count++;
			}
		}
		result = count / n * 100;
		printf("%.3lf%%\n", result);
		result = 0;
		count = 0;
		avg = 0;
		n = 0;
		sum = 0;
		for (int j = 0; j <= n; j++) {
			a[j] = NULL;
		}
	}
	return 0;
}