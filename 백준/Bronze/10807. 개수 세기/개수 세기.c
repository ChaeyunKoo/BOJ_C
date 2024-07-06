#include <stdio.h>

int main()
{
	int n;
	int a[100] = { 0 };
	int v;
	int count = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);

	for (int i = 0; i < n; i++) {
		if (a[i] == v)
			count++;
	}
	printf("%d", count);
	return 0;
}