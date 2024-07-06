#include <stdio.h>
int sum[1000000];

int main(void)
{
	int num;
	int a, b;
	
	scanf("%d", &num);

	
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);
		sum[i] = a + b;
	}

	for (int i = 0; i < num; i++) {
		printf("%d\n", sum[i]);
	}
	return 0;
}