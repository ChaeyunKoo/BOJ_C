#include <stdio.h>

int main()
{
	int n, k;
	int grade[1000] = { 0 };
	int tmp = 0;
	
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &grade[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grade[i] > grade[j]) {
				tmp = grade[j];
				grade[j] = grade[i];
				grade[i] = tmp;
			}
		}
	}
	printf("%d", grade[k - 1]);
	return 0;
}