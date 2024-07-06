#include <stdio.h>
#include <string.h>

int main() {
	char S[100] = { 0 };
	int length = 0;

	scanf("%s", S);
	length = strlen(S);

	printf("%d", length);
	return 0;
}