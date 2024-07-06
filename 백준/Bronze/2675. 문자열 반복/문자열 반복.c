#include <stdio.h>
#include <string.h>

int main() {
	int T = 0; // 테스트 케이스
	int R = 0;
	char S[20] = { 0 };

	scanf("%d", &T);
	int i = 0;
	while (i < T) {
		scanf("%d %s", &R, S);
		int length = strlen(S);

		for (int j = 0; j < length; j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");

		//초기화
		for (int j = 0; j < length; j++) {
			S[j] = 0;
		}
		i++;
	}
	return 0;
}