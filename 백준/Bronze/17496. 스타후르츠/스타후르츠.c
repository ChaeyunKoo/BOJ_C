#include <stdio.h>

int main() {
	int n = 0, t = 0, c = 0, p = 0;
	int count = 0, day = 1;
	int money = 0;

	scanf("%d %d %d %d", &n, &t, &c, &p);

	while (day <= n) {
		day += t;
		count++;
	}
	if (day > n)
		count--;
	money = count * c * p;
	printf("%d", money);
	return 0;
}