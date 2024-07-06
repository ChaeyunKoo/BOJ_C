#include <stdio.h>

int main()
{
	int a;
	int count = 0;
	char b[100] = { 0 };

	scanf("%d", &a);
	scanf("%s", b);

	for (int i = 0; i < a/2; i++)
	{
		if (b[i] != b[(a - 1) - i])
			count++;
	}
	printf("%d\n", count);

	return 0;
}