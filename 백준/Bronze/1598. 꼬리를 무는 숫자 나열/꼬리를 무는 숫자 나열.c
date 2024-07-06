#include <stdio.h>

int main() {
	int n = 0, m = 0;
	int g[2] = { 0 }; //위치(동서방향)
	int s[2] = { 0 }; //위치(남북방향)
	int res_g = 0, res_s = 0; //동서, 남북방향 직각거리
	scanf("%d %d", &n, &m);

	if ((n || m == 1) || (n || m == 2) || (n || m == 3) || (n || m == 4)){
		for (int i = 1; i < 5; i++) {
			if (n == i)
				g[0] = 0, s[0] = i;
			if (m == i)
				g[1] = 0, s[1] = i;
		}
	}
	while (1) {
		if ((n >= 1 && n <= 4) && (m >= 1 && m <= 4)) {
			g[0]++, g[1]++;
			break;
		}
		if (n > 4) {
			n -= 4;
			g[0]++; //n의 가로 위치
			for (int i = 1; i < 5; i++) {
				if (n == i)
					s[0] = i; //n의 세로 위치
			}
		}
		if (m > 4) {
			m -= 4;
			g[1]++; //m의 가로 위치
			for (int i = 1; i < 5; i++) {
				if (m == i)
					s[1] = i; //m의 세로 위치
			}
		}
	}
	if (g[0] >= g[1])
		res_g = g[0] - g[1];
	else
		res_g = g[1] - g[0];

	if (s[0] >= s[1])
		res_s = s[0] - s[1];
	else
		res_s = s[1] - s[0];

	printf("%d", res_g + res_s);
	return 0;
}