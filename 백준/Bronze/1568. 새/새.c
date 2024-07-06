#include <stdio.h>

int main() {
	int n = 0;
	int bird = 0; //남은 새의 수
	int count = 0;

	scanf("%d", &n);
	bird = n;

	int i = 1;
	while (1) {
		if (bird < i) {
			i = 1;
			bird = bird - i;
			count++;
		}
		else {
			bird = bird - i;
			count++;
		}
		if (bird == 0)
			break;
		i++;
	}
	printf("%d", count);
	return 0;
}