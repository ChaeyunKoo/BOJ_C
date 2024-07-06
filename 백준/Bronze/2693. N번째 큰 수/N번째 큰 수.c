#include <stdio.h>

int main() {
	int tmp = 0;
	int arr[10] = { 0 };
	int T = 0;

	scanf("%d", &T);

	int i = 0;
	while (i < T) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &arr[j]);
		}
		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				if (arr[j] < arr[k]) {
					tmp = arr[j];
					arr[j] = arr[k];
					arr[k] = tmp;
				}
			}
		}
		printf("%d\n", arr[2]);
		i++;
	}
	return 0;
}