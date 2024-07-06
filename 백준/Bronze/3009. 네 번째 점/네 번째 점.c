#include <stdio.h>

int main() {
	int x[3] = { 0 }, y[3] = { 0 };
	int a = 0, b = 0;

	for (int i = 0; i < 3; i++)
		scanf("%d %d", &x[i], &y[i]);

	if (x[0] == x[1])
		a = x[2];
	else if (x[0] == x[2])
		a = x[1];
	else
		a = x[0];

	if (y[0] == y[1])
		b = y[2];
	else if (y[0] == y[2])
		b = y[1];
	else
		b = y[0];

	printf("%d %d", a, b);
	return 0;
}