#include <stdio.h>

int main(void)
{
	int people;
	int size;
	int people_news[5];

	scanf("%d %d", &people, &size);

	int people_sum;
	people_sum = people * size;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &people_news[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", people_news[i] - people_sum);
	}
	return 0;
}