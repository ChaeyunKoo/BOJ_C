#include <stdio.h>

char rec[100][100];
int main() {
	int n = 0; //세로
	int m = 0; //가로

	int count = 0; //모든 카운트
	int count_col = 0; //열 전용 카운팅
	int count_row = 0; //행 전용 카운팅
	int test = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= m; j++) {
			scanf("%c", &rec[i][j]);
		}
	}
	//왜 가로 인덱스가 1부터 들어가는지??
	//그래서 1부터 m까지 검사를 해서 경비원의 수를 구했습니다..
	
	//행 검사
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= m; j++) {
			if (rec[i][j] == 'X') {
				test = 1;
			}
		}
		if (test == 0) {
			count_row++;
			count++;
		}
		test = 0;
	}
	test = 0;
	count_col = 0;
	//열 검사
	for (int j = 1; j <= m; j++) {
		test = 0;
		for (int i = 0; i < n; i++) {
			if (rec[i][j] == 'X') {
				test = 1; //test가 1인 경우 해당 열에는 경비원 필요 없음.
			}
		}
		if (test == 0) {
			count_col++;
			count++;
		}
	}
	if (count_col > count_row) {
		printf("%d", count - count_row);
	}
	else if (count_col < count_row) {
		printf("%d", count - count_col);
	}
	else
		printf("%d", count / 2);
	return 0;
}