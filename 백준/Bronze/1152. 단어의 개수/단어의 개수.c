#include <stdio.h>

int main() {
	char S[1000000] = { 0 };
	int count = 0;

	scanf("%[^\n]s", S);
	int length = strlen(S);

	if (S[0] != ' ' && S[length - 1] != ' ') {
		count = 1;
	}
	else if (S[0] == ' ' && S[length - 1] == ' ') {
		count = -1;
	}

	int i = 0;
	while (i < length) {
		if (S[i] == ' ') {
			count++;
		}
		i++;
	}
	printf("%d", count);
	return 0;
}