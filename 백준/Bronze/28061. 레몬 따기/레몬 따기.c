#include <stdio.h>

int arr[200000];
int max[200000];
int main() {
	int result = 0;
	int n = 0; //나무의 수
	
	scanf("%d", &n);
	int i = 0;
	while (i < n) {
		scanf("%d", &arr[i]);
		i++;
	}

	int j = 0;
	while (j < n) {
		max[j] = arr[j] - n + j;
		j++;
	}

	result = max[0];
	for (i = 0; i < n; i++) {
		if (result < max[i])
			result = max[i];
	}

	printf("%d", result);
	return 0;
}