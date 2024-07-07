#include <stdio.h>

int main() {
	int n = 0; int result = 0;
	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		int con = i, q = i; //생성자, 몫
		while (q != 0) {
			con += q % 10;
			q = q / 10;
		}
		if (con == n) {
			result = i;
			break;
		}
	}
	printf("%d", result);
	return 0;
}