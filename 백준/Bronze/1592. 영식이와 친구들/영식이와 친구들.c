#include <stdio.h>

int main() {
	int N = 0; //총 인원
	int M = 0; //게임 종료 조건
	int L = 0; //공을 받는 사람의 위치

	int count = 0;
	int score[55] = { 0 };
	int start = 0; //공을 던지는 사람의 번호
	int next = 0; //다음 번(공을 받는 사람)의 번호
	int tmp1 = 0;
	int tmp2 = 0;

	scanf("%d %d %d", &N, &M, &L);

	start = 1; //1번부터 던지기 시작
	score[1]++; //1번이 공을 잡은 횟수

	while (1) {
		if (score[start] == M)
			break;

		if (score[start] % 2 == 1) { //공을 받은 횟수: 홀수 -> 시계방향
			if (start + L > N) {
				next = (start + L) - N;
			}
			else {
				next = start + L;
			}
			start = next;
			score[start]++;
			count++;
		}

		else if (score[start] % 2 == 0) { //공을 받은 횟수: 짝수 -> 반시계방향
			if (start - L <= 0) {
				next = N + (start - L);
			}
			else {
				next = start - L;
			}
			start = next;
			score[start]++;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}