#include <stdio.h>
#include <string.h>

int main() {
	char S[100] = { 0 };
	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char result[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		result[i] = -1;
	}

	scanf("%s", S);
	int length = strlen(S);

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < 26; j++) {
			if (S[i] == alphabet[j]) {
				if (result[j] == -1) {
					result[j] = i;
				}
			}
		}
	}
	
	for (int i = 0; i < 26; i++) {
		printf("%d ", result[i]);
	}
	return 0;
}