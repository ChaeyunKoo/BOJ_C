#include <stdio.h>

int main()
{
	int x;
	int n;
	int a, b;
	int sum = 0;

	scanf("%d", &x);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		sum += a * b;
	}
	if (sum == x)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}