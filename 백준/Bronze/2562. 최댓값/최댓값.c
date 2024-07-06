#include <stdio.h>

int main()
{
	int n[9];
	int max;
	int num = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]);
	}
	max = n[0];
	for (int i = 0; i < 9; i++) {
		if (max < n[i]) {
			max = n[i];
			num = i;
		}
	}
	printf("%d\n%d", max, num + 1);
	return 0;
}