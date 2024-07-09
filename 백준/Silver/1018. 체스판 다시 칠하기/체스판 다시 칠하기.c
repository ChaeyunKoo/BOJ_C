// 어렵다
#include <stdio.h>

#define minFinder(a,b) a<b?a:b

int main() {
	char board[50][50] = { 0 };

	int N = 0, M = 0;
	int min = 80;
	int cntB = 0, cntW = 0;

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%s", &board[i]);

	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			cntB = 0;
			cntW = 0;
			/*색깔 변경이 필요한 칸을 세는 방법*/
			for (int a = i; a < i + 8; a++) {
				for (int b = j; b < j + 8; b++) {
					if ((a + b) % 2 == 0) { 
						// 행+열 값이 짝수일 때
						if (board[a][b] == 'B')
							// 현재 인덱스가 B라면
							// W로 시작하는 체스판에서는 
							// 현재 인덱스가 W가 되어야 함.
							cntW++; 
						else
							// 현재 인덱스가 W라면
							// B로 시작하는 체스판에서는
							// 현재 인덱스가 B가 되어야 함.
							cntB++;
					}
					else { 
						if (board[a][b] == 'B')
							cntB++;
						else
							cntW++;
					}	
				}
			}
			min = minFinder(min, cntB);
			min = minFinder(min, cntW);
		}
	}
	printf("%d\n", min);

	return 0;
}