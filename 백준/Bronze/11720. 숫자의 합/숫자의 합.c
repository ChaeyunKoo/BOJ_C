#include <stdio.h>

int main() {
	char S[100] = { 0 };
	int N = 0;
	int sum = 0;

	scanf("%d", &N);
	scanf("%s", S);

	int i = 0;
	while (i < N) {
		//문자 '0'의 아스키코드는 48.
		//문자열에 있는 숫자를 정수형으로 변환하기 위함.
		sum += S[i] - '0';
		i++;
	}
	printf("%d ", sum);

	return 0;
}