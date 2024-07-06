#include <stdio.h>
#include <string.h>

int main() {
	char S[102] = { 0 };
	int count = 0;

	scanf("%s", S);
	int length = strlen(S);
	count = length;

	int i = 0;
	while (i < length) {
		if (S[i] == '=') {
			if (S[i - 1] == 'c' || S[i - 1] == 's') {
				count--;
			}
			else if (S[i - 1] == 'z') {
				if (i >= 2) {
					if (S[i - 2] == 'd') {
						count-=2;
					}
					else
						count--;
				}
				else
					count--;
			}
			
		}
		else if (S[i] == '-') {
			if (S[i - 1] == 'c' || S[i - 1] == 'd') {
				count--;
			}
		}
		else if (S[i] == 'j') {
			if (S[i - 1] == 'l' || S[i - 1] == 'n') {
				count--;
			}
		}
		i++;
	}
	printf("%d", count);
	return 0;
}