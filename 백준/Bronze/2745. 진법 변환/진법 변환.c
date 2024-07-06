#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	char N[10000] = { 0 };
	int B = 0;
	int digit = 0;
	int result = 0;

	scanf("%s %d", N, &B);
	int len = strlen(N); // 입력 받는 숫자의 길이

	// N의 맨 왼쪽 자리부터 자릿수 계산 시작
	for (int i = 0; i < len; i++) {
		if (N[i] >= '0' && N[i] <= '9') {
			digit = N[i] - '0';
		}
		else if (N[i] >= 'A' && N[i] <= 'Z') {
			digit = N[i] - 'A' + 10;
		}
		result += digit * pow(B, len - 1 - i);
	}
	printf("%d", result);
	return 0;
}