#include <stdio.h>

int a[1000000];

int main()
{
	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int max = a[0];
	int min = a[0];

	for (int i = 0; i < n; i++) {
		if (max < a[i])
			max = a[i];
	}
	for (int i = 0; i < n; i++) {
		if (min > a[i])
			min = a[i];
	}
	printf("%d %d", min, max);
}