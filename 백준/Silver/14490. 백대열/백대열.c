#include <stdio.h>

int main() {
	int n = 0, m = 0;
	int cd = 0;

	scanf("%d:%d", &n, &m);

	int i = 1;
	while (i <= n || i <= m) {
		if (n % i == 0 && m % i == 0)
			cd = i;
		i++;
	}
	printf("%d:%d", n / cd, m / cd);
	return 0;
}