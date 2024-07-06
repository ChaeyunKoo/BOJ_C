#include <stdio.h>

char S[5][17];
char str;
int main() {

	for (int i = 0; i < 5; i++) {
		scanf("%s", S[i]);
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (S[j][i] == NULL)
				continue;
			else
				printf("%c", S[j][i]);
		}
	}

	return 0;
}