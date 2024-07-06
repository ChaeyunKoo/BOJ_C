#include <stdio.h>

int main() {
	long long n = 0;
	long long dot = 5; //1단계에서의 점의 개수로 초기화

	scanf("%lld", &n);
	long long i = 2; //2단계부터 점의 개수 계산 시작
	while (i <= n) {
		dot += (i + 1) * 3 - 2;
		i++;
	}
	printf("%lld", dot % 45678);
	return 0;
}