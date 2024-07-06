#include <stdio.h>

int main() {
	int n = 0; //카드의 개수
	int m = 0; //최대
	int card[100] = { 0 }; //n개만큼 입력받을 카드의 개수
	int sum = 0; //카드 3개의 합
	int result = 0; //m에 가장 가까운(혹은 같은) 카드 3장의 합
	                //추후 출력할 변수.

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}

	//입력 받은 카드 중 3장을 고르기 위한 삼중 for문!
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = card[i] + card[j] + card[k];

				if (sum > result && sum <= m) {
					result = sum;
				}
			}
		}
	}
	printf("%d", result);
	return 0;
}