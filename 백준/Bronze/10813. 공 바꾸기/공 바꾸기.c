#include <stdio.h>

int main() {
	int n = 0;
	int m = 0;
	int basket[100] = { 0 };
	int a = 0;
	int b = 0;
	int tmp = 0;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		basket[i] = i;
	}
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &a, &b);
		tmp = basket[a];
		basket[a] = basket[b];
		basket[b] = tmp;
	}
	for (int i = 1; i <= n; i++) {
		printf("%d ", basket[i]);
	}
	return 0;
}