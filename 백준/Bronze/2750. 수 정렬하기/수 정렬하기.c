#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int a[1000] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < n; j++) {
		int tmp = 0;
		for (int i = 0; i < n; i++) {
			if (a[j] < a[i]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}