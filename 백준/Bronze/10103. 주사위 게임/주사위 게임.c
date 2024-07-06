#include <stdio.h>

int main() {
	int n = 0;
	int first_score = 100;
	int second_score = 100;
	int first = 0;
	int second = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &first, &second);
		if (first > second) {
			second_score -= first;
		}
		else if (first < second) {
			first_score -= second;
		}
	}	
	printf("%d\n%d", first_score, second_score);
	return 0;
}