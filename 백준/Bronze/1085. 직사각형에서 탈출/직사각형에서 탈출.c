#include <stdio.h>

int main() {
	int x = 0, y = 0, w = 0, h = 0;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int min = x-0; //거리의 최솟값
	if (min > w - x)
		min = w - x;
	if (min > y - 0)
		min = y - 0;
	if (min > h - y)
		min = h - y;

	printf("%d", min);
	return 0;
}