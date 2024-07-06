#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int N = 0;
	int B = 0;
	int ope = 0; // 피연산자
	int remain = 0; // 나머지
	char convert = '0'; // 
	char tmp[10000] = { 0 };
	char result[10000] = { 0 };

	scanf("%d %d", &N, &B);

	ope = N;
	int i = 0;
	while (ope > 0) {
		remain = ope % B;
		if (remain >= 0 && remain <= 9)
			convert = (char)(remain + 48);
		else if (remain >= 10 && remain <= 35) {
			convert = (char)(remain + 55);
		}
		tmp[i] = convert;
		ope = ope / B;
		i++;
	}
	int len = strlen(tmp);
	for (int i = 0; i < len; i++) {
		result[i] = tmp[len - i - 1];
	}
	printf("%s", result);
	return 0;
}