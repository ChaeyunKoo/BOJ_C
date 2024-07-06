#include <stdio.h>

int main()
{
	int a[3] = { 0 };
	int tmp = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[i] < a[j]) {
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	printf("%d ", a[1]);
	return 0;
}