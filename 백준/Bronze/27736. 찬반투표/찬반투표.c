//
#include <stdio.h>

int main() {
	int N = 0; //재학생의 수
	int y = 0, n = 0, m = 0; //찬성, 반대, 기권
	int arr[100] = { 0 };

	scanf("%d", &N);
	int i = 0;
	while (i < N) {
		scanf("%d", &arr[i]);
		i++;
	}
	int j = 0;
	while (j < N) {
		if (arr[j] == 1)
			y++;
		else if (arr[j] == -1)
			n++;
		else if (arr[j] == 0)
			m++;
		j++;
	}
	if (N % 2 != 0) {
		if (m >= N / 2 + 1)
			printf("INVALID");
		else if (n >= y)
			printf("REJECTED");
		else if (y > n)
			printf("APPROVED");
	}
	else {
		if (m >= N / 2)
			printf("INVALID");
		else if (n >= y)
			printf("REJECTED");
		else if (y > n)
			printf("APPROVED");
	}
	return 0;
}