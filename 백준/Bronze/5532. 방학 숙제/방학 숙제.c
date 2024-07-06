#include <stdio.h>

int main(void)
{
	int L, A, B, C, D;
	int day;
	int day1, day2;
	int dayf;

	scanf("%d\n", &L);
	scanf("%d\n", &A);
	scanf("%d\n", &B);
	scanf("%d\n", &C);
	scanf("%d", &D);

	if (B % D > 0)
		day1 = B / D + 1;
	else if(B % D == 0)
		day1 = B / D;

	if (A % C > 0)
		day2 = A / C + 1;
	else if (A % C == 0)
		day2 = A / C;

	if (day1 >= day2)
		printf("%d", L - day1);
	else
		printf("%d", L - day2);

	return 0;
}