#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a + b + c;

	if (sum == 180) {
		if (a == 60 && b == 60 && c == 60)
			printf("Equilateral");
		else if (a == b || a == c || b == c)
			printf("Isosceles");
		else
			printf("Scalene");
	}
	else
		printf("Error");

	return 0;
}