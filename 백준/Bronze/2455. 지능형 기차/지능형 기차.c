#include <stdio.h>



int main(void)
{
	int a, b, c, d, e, f, g, h;
	int sum1 = 0;
	int sum[4] = { 0 };

	scanf("%d %d", &a, &b);
	sum[0] = sum1 - a + b;

	scanf("%d %d", &c, &d);
	sum[1] = sum[0] - c + d;

	scanf("%d %d", &e, &f);
	sum[2] = sum[1] - e + f;

	scanf("%d %d", &g, &h);
	sum[3] = sum[2] - g + h;

	int max;
	if (sum[0] >= sum[1])
		max = sum[0];
	else
		max = sum[1];
	if (max >= sum[2])
		max = max;
	else
		max = sum[2];
	if (max >= sum[3])
		max = max;
	else
		max = sum[3];

	printf("%d", max);
	return 0;
}