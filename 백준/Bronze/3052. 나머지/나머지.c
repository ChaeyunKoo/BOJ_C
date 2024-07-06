#include <stdio.h>

int main(void) {
	int a[10] = { 0 };
	int num[10] = { 0 };
	int b[42] = { 0 };
	int count = 0;
	int result = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		num[i] = a[i] % 42;
	}
	for (int i = 0; i < 42; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == num[j]) {
				count++;
				b[i] = count;
			}
		}
		count = 0;
	}
	for (int i = 0; i < 42; i++) {
		if (b[i] != 0) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}