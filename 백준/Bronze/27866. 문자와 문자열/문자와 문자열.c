#include <stdio.h>

int main() {
	char S[1000] = {0};
	int i = 0;

	scanf("%s", S);
	scanf("%d", &i);

	printf("%c", S[i-1]);

	return 0;
}