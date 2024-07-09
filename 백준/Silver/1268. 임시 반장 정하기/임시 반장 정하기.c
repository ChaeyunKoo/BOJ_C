#include <stdio.h>

int arr[1000][5] = { 0 };
int count[1000] = { 0 };
int main() {
	int N = 0; //학생 수

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5; j++)
			scanf("%d", &arr[i][j]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < 5; k++) {
				if (arr[i][k] == arr[j][k]) {
					count[i]++;
					break;
				}
			}
		}
	}

	int max = 0, stu = 0;
	for (int i = 0; i < N; i++) {
		if (max < count[i]) {
			max = count[i];
			stu = i;
		}
		else if (max == count[i]) {
			if (stu > i) {
				stu = i;
			}
		}
	}

	printf("%d", stu + 1);

	return 0;
}