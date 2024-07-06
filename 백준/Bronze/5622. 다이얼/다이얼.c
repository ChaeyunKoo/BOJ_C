#include <stdio.h>
#include <string.h>

int main() {
	char S[15] = { 0 };
	int time = 0;

	scanf("%s", S);

	int length = strlen(S);
	int i = 0;
	while (i < length) {
		if (S[i] >= 'A' && S[i] <= 'C') {
			time += 3;
		}
		else if (S[i] >= 'D' && S[i] <= 'F') {
			time += 4;
		}
		else if (S[i] >= 'G' && S[i] <= 'I') {
			time += 5;
		}
		else if (S[i] >= 'J' && S[i] <= 'L') {
			time += 6;
		}
		else if (S[i] >= 'M' && S[i] <= 'O') {
			time += 7;
		}
		else if (S[i] >= 'P' && S[i] <= 'S') {
			time += 8;
		}
		else if (S[i] >= 'T' && S[i] <= 'V') {
			time += 9;
		}
		else if (S[i] >= 'W' && S[i] <= 'Z') {
			time += 10;
		}
		i++;
	}
	printf("%d", time);
	return 0;
}