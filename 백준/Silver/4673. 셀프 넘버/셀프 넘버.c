#include <stdio.h>

int sum(int n) {
	int sum = n;

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int arr[10001] = {0}, i = 0, check = 0;

	for (i = 1; i < 10001; i++) {
		check = sum(i);
		//생성자가 있는 숫자 -> 1로 표시.
		if (check < 10001)
			arr[check] = 1;
	}
	//생성자가 없는 수 출력
	for (i = 1; i < 10001; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);
	}
	return 0;
}