#include <stdio.h>

int main()
{
	int s1, s2;
	int n = 0;
	int l = 0;
	int x, y;
	scanf("%d %d", &s1, &s2);

	for (int i = 0; i < s1; i++) {
		scanf("%d %d", &x, &y);
		if (x == y)
			n++;
	}
	x = 0;
	y = 0;
	for (int i = 0; i < s2; i++) {
		scanf("%d %d", &x, &y);
		if (x == y)
			l++;
	}
	if (n == s1 && l == s2)
		printf("Accepted");
	else if (n != s1)
		printf("Wrong Answer");
	else if (n == s1 && l != s2)
		printf("Why Wrong!!!");

	return 0;
}