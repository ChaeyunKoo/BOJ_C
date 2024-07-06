#include <stdio.h>
#include <string.h>

int main() {

	char word[100] = { 0 };
	int size = 0;
	int result = 0;

	scanf("%s", word);
	size = strlen(word);

	int i = 0;
	while (i < size / 2) {
		if (word[i] == word[size - 1 - i]) {
			result = 1;
		}
		else {
			result = 0;
			break;
		}
		i++;
	}
	if (size == 1)
		result = 1;

	printf("%d", result);
	return 0;
}