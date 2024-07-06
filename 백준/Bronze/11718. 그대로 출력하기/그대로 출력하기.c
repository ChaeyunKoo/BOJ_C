#include <stdio.h>

int main() {
	int S = 0;

	while (1) {
		S = getchar();
		if (S == EOF) {
			break;
		}
		putchar(S);
	}
	return 0;
}