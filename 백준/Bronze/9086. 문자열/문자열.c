#include <stdio.h>
#include <string.h>

int main() {
	char S[1000] = { 0 };
	char result[3] = { 0 };
	int test = 0;

	scanf("%d", &test);

	int i = 0;
	while (i < test) {
		scanf("%s", S);
		int length = strlen(S);
		result[0] = S[0];
		result[1] = S[length - 1];

		printf("%c%c\n", result[0], result[1]);
		i++;
	}
	return 0;
}