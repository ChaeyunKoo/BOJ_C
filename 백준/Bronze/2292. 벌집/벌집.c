#include <stdio.h>

int main() {
	int sixx = 6;
	int count = 2;
	int i = 2;
	int n = 0;

	scanf("%d", &n);

	while (1) {
		if (n == 1) {
			printf("1");
			break;
		}
		else if (n <= sixx + 1) {
			printf("%d", count);
			break;
		}
		else {
			sixx += 6 * i;
			i++;
			count++;
		}
	}
}