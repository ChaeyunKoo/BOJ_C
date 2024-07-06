#include <stdio.h>

int main()
{
	int n;
	int a[9] = { 0 };
	int sum = 0;

	scanf("%d", &n);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("%d", n - sum);
		
}