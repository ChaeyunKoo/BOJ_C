//원래는 문자열 형식으로 변환해서 배열에 들어있는 값이
//0인지 카운팅하려다가
//숫자 자체에 0이 있는 지 탐색하는 방법으로 바꿨음...
#include <stdio.h>

int main() {
	int t = 0, n = 0, m = 0;
	int count = 0;
	//숫자의 각 자리를 탐색하기 위한 변수 search 선언
	int search = 0; 

	scanf("%d", &t);

	int i = 0;
	while (i < t) {
		scanf("%d %d", &n, &m);

		//n부터 m까지 탐색
		for (int j = n; j <= m; j++) {
			search = j;
			//j가 0이면 무조건 카운팅
			if (j == 0) {
				count++;
			}
			//만약 변수 search를 10으로 나눈 나머지가 0이라면
			//일의 자리가 0이라는 의미 -> 카운트
			//search를 일의 자리부터 탐색하면서 자릿수를 하나씩 줄이기 위해
			//10을 나눈 값을 대입함.
			//ex) j가 502라면? 502를 10으로 나눈 나머지는 0이 아님 -> not counting
			//일의 자리 탐색 후 십의 자리 탐색을 위해 search에 502를 10으로 나눈 50 대입.
			//search가 0보다 크다면 탐색 반복.
			else if (j > 0) {
				while (search > 0) {
					if (search % 10 == 0)
						count++;
					search /= 10;
				}
			}
		}
		printf("%d\n", count);
		count = 0;
		i++;
	}
	return 0;
}