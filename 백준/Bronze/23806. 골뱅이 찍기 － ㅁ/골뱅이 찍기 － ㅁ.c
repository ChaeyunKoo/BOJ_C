#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n * 5; i++) {
		for (int j = 1; j <= n * 5; j++) {
			if (i > n && i <= n * 4 && j > n && j <= n * 4) {
				printf(" ");
			}
			else
				printf("@");
		}
		printf("\n");
	}
}