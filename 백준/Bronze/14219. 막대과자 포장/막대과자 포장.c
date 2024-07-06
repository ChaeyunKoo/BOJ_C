#include <stdio.h>

int main() {
	int n = 0;
	int m = 0;

	scanf("%d %d", &n, &m);

	if (n * m % 3 == 0) {
		printf("YES");
	}
	else
		printf("NO");

	return 0;
}