#include <stdio.h>

int main(void)
{
	int a[6] = { 0 };
	int b[6] = { 0 };

	for (int i = 0; i < 6; i++)
		scanf("%d", &a[i]);
	printf("%d %d %d %d %d %d", 1 - a[0], 1 - a[1], 
		2 - a[2], 2 - a[3], 2 - a[4], 8 - a[5]);
	return 0;
}