#include <stdio.h>

char arr[100][100];
int res;

int main() {
	int n = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) { //행
		scanf("%s", arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == arr[j][i]) {
				res= 1;
			}
			else {
				res= 0;
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}