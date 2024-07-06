#include <stdio.h>

int main()
{
	int num[28] = { 0 };
	int answer[31] = { 0 };
	int n = 0;

	for (int i = 0; i < 28; i++) {
		scanf("%d", &num[i]); 
		n = num[i];
		answer[n] = n;
	}
	for (int i = 0; i <= 30; i++) {
		if (i != answer[i]) {
			printf("%d\n", i);
		}
	}
	return 0;
}