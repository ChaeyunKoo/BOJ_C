#include <stdio.h>

char str[10];

int main() {

	scanf("%s", str);

	int length = strlen(str);
	int temp = 0;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	printf("%s", str);

	return 0;
}