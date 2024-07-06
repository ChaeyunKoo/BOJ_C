#include <stdio.h>
#include <string.h>

int main() {
	int N = 0;
	char alphabet[102] = { 0 };
	char S[102] = { 0 };
	int on = 0;

	scanf("%d", &N);
	int count = N; //그룹 단어의 개수

	int i = 0;
	while (i < N) {
		scanf("%s", S);
		int length = strlen(S);

		alphabet[0] = S[0];
		int index = 0;
		char alpha = S[0];
		for (int j = 1; j < length; j++) {
			if (alpha != S[j]) {
				alpha = S[j];
				alphabet[index + 1] = S[j];

				index++;
			}
		}

		int meter = strlen(alphabet);
		for (int j = 0; j < meter; j++) {
			for (int k = 0; k < meter; k++) {
				if (alphabet[j] == alphabet[k]) {
					if (j != k) {
						on = 1;
						count--;
						break;
					}
				}
			}
			if (on == 1) {
				break;
			}
		}
		i++;
		on = 0;
		for (int j = 0; j < length; j++) {
			S[j] = 0;
			alphabet[j] = 0;
		}
	}
	printf("%d", count);
	return 0;
}