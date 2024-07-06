#include <stdio.h>

int a[10000];
int re[10000];

int main()
{
	int n;
	int x;

	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < x)
			re[i] = a[i];
	}
	for (int i = 0; i < n; i++) {
		if(re[i]!=NULL)
			printf("%d ", re[i]);
	}
	return 0;
}