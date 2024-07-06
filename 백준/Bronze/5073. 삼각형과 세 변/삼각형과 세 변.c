#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	int sum = 0, max = 0;

	while (1) {
		max = 0, sum = 0;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) break;
		else {
			if (a > max) max = a;
			if (b > max) max = b;
			if (c > max) max = c;
			sum = a + b + c - max; //가장 긴 변을 제외한 나머지 두 변의 합
			if (sum > max) {
				if (a == b && b == c && c == a) printf("Equilateral\n");
				else if (a == b || b == c || c == a) printf("Isosceles\n");
				else printf("Scalene\n");
			}
			else printf("Invalid\n");
		}
	}
	return 0;
}