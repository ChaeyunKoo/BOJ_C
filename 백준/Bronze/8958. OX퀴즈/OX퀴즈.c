#include <stdio.h>

int main() {
	int n;
	char a[80] = { 0 };
	int result[80] = { 0 };
	int count = 0;
	int sum = 0;

	scanf("%d", &n);
	
	for (int j = 0; j < n; j++) {
		scanf("%s", a);
		for (int i = 0; a[i] != NULL; i++) {
			if (a[i] == 79) {
				count++;
				result[i] = count;
			}
			else if (a[i] == 88) {
				result[i] = 0;
				count = 0;
			}
			sum += result[i];
		}
		printf("%d\n", sum);
		sum = 0;
		count = 0;
		for (int i = 0; result[i] != NULL; i++) {
			result[i] = NULL;
			a[i] = NULL;
		}
	}
	return 0;
}