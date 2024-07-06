#include <stdio.h>

int main()
{
	int n;
	double sub[1000] = { 0 };
	double new_sub[1000] = { 0 };
	double M = 0;
	double sum = 0;
	double result = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &sub[i]);
	}
	for (int i = 0; i < n; i++) {
		if (M < sub[i])
			M = sub[i];
	}
	for (int i = 0; i < n; i++) {
		sum += sub[i] / M * 100;
	}
	result = sum / n;

	printf("%lf", result);
	return 0;
}