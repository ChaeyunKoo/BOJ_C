#include <stdio.h>

int main() {
	int T = 0;
	int size = 0;

	scanf("%d", &T);

	int i = 0;
	while (i < T) {
		scanf("%d", &size);

		for (int j = 1; j <= size; j++) { //가로줄
			for (int k = 1; k <= size; k++) { //각 줄에 대해
				if (j == 1 || j == size) {
					printf("#");
				}
				else {
					if (k == 1 || k == size)
						printf("#");
					else
						printf("J");
				}
			}
			printf("\n");
		}
		i++;
		printf("\n");
	}
	return 0;
}