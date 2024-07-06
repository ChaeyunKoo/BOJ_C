#include <stdio.h>

int main(void)
{
	int T;
	int A[100];
	int B[100];
	int C[100];
	int max, MAX, other;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &A[i], &B[i], &C[i]);

		max = A[i];
		MAX = max < B[i] ? B[i] : max;
		MAX = MAX < C[i] ? C[i] : MAX;
		if (MAX == A[i]) 
			other = B[i] + C[i];
		if (MAX == B[i]) 
			other = A[i] + C[i];
		if (MAX == C[i])
			other = A[i] + B[i];
		
		if (MAX >= other)
			printf("Case #%d: invalid!\n", i + 1);

		else if (A[i] == B[i] && A[i] == C[i])
			printf("Case #%d: equilateral\n", i + 1);

		else if (A[i] == B[i] || B[i] == C[i] || C[i] == A[i])
			printf("Case #%d: isosceles\n", i + 1);
		else if (A[i] != B[i] && B[i] != C[i] && A[i] != C[i])
			printf("Case #%d: scalene\n", i + 1);
	}
	return 0;
}