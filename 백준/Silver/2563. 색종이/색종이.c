#include <stdio.h>

int paper[100][100];
int count_num[100];

int main() {
	int num = 0;
	int a = 0, b = 0;
	int count = 0, result = 0;

	scanf("%d", &num);
	int i = 0;
	while (i < num) {
		scanf("%d %d", &a, &b);
		for (int j = a - 1; j < a + 10 - 1; j++) {
			for (int k = b - 1; k < b + 10 - 1; k++) {
				/*
				if (paper[k][j] != 0) {
					paper[k][j]++;
				}
				else {
					paper[k][j] = 1;
				}
				*/
				paper[k][j] = 1;
			}
		}
		i++;
	}
	/* 색종이 출력
	for (int j = 0; j < 30; j++) {
		for (int k = 0; k < 30; k++) {
			printf("%d ", paper[j][k]);
		}
		printf("\n");
	}
	*/
	int l = 0;
	for (int j = 0; j < 100; j++) {
		for (int k = 0; k < 100; k++) {
			if (paper[j][k] != 0) {
				count++;
			}
		}
	}
	
	printf("%d", count);
	return 0;
}