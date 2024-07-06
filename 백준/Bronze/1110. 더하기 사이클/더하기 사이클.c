#include <stdio.h>

int main()
{
	int n;
	int x, y;
	int re = 0;
	int count = 0;

	scanf("%d", &n);
	re = n;

	while (1) {
		if (re < 10) {
			x = 0;
			y = re;
		}
		else {
			x = re / 10;
			y = re % 10;
		}
		if (x + y < 10)
			re = y * 10 + (x + y);
		else
			re = y * 10 + ((x + y) % 10);
		count++;
		if (re == n)
			break;
	}
	printf("%d", count);
	return 0;
}