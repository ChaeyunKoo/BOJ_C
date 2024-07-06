#include <stdio.h>

int main()
{
	int h, m;
	int result_h = 0;
	int	result_m = 0;

	scanf("%d %d", &h, &m);

	if (m >= 45 && m <= 59) {
		result_m = m - 45;
		result_h = h;
	}
		
	else if (m >= 0 && m < 45) {
		result_m = 60 - (45 - m);
		if (h == 0)
			result_h = 23;
		else
			result_h = h - 1;
	}

	printf("%d %d", result_h, result_m);

	return 0;
}