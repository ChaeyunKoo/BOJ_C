#include <stdio.h>

int main() {
	int i = 0;
	int temp = 0;
	int check = 0;
	int count = 0;

	int series;
	scanf("%d", &series);

	//temp를 1000으로 나눈 값이 666이라면
	//check가 1로 활성화
	//(아닐 경우 temp를 10으로 나누고 계속 반복.)
	//(-> 연속된 666을 찾기 위해서.)
	//if문에 의해 count 1 증가되며,
	//만약 count와 입력받은 시리즈가 일치한다면
	//for문 종료 후 그때의 i 출력.
	// -> 즉 series와 count가 일치할 때까지 i를 증가시키면서
	//계속 반복하는 것!
	for (i = 666 ;; i++) {
		temp = i;
		check = 0;
		while (temp >= 666) {
			if (temp % 1000 == 666) {
				check = 1;
			}
			temp /= 10;
		}
		//check가 1일 때 동작.
		if (check) {
			count++;
			if (count == series) {
				break;
			}
		}
	}
	printf("%d", i);
	return 0;
}