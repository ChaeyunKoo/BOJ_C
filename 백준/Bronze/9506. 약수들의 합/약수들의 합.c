#include <stdio.h>

int mea[100000] = { 0 };
int result[100000] = { 0 };

int main() {
	int n = 0;
	int sum = 0;
	int count = 0;

	while (1) {
		scanf("%d", &n);

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				mea[i] = i;
				sum += i;
				count++;
			}
		}
		int j = 1;
		int d_count = 1;
		while (j < n) {
			if (mea[j] != 0) {
				result[d_count] = mea[j];
				d_count++;
			}
			j++;
		}
		j = 1;
		d_count = 1;

		if (n == -1)
			break;
		else if (n == sum) {
			printf("%d =", n);
			for (int i = 1; i < count; i++) {
				printf(" %d +", result[i]);
			}
			printf(" %d\n", result[count]);
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}
		sum = 0;
		count = 0;
		for (int i = 0; i < 100000; i++) {
			mea[i] = 0;
			result[i] = 0;
		}
	}
	return 0;
}