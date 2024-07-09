#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	int x = 0, y = 0;
	int flag = 0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	for (x = -999; x < 1000; x++) {
		for (y = -999; y < 1000; y++) {
			if (a * x + b * y == c && d * x + e * y == f) {
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	printf("%d %d", x, y);
	return 0;
}