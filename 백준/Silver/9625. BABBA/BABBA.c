#include <stdio.h>

int main() {
	int k = 0; 
	int pre_a = 1, pre_b = 0; //이전 a,b의 개수
	int next_a = 0, next_b = 0; //다음 a,b의 개수

	scanf("%d", &k);

	//다음 a는 이전 b의 개수와 같고,
	//다음 b는 이전 a와 b의 개수의 합과 같음.
	//따라서 다음 a,b의 개수를 지정해주고
	//이를 반복하기 위해 다시 이전 a,b 변수에 넣어주면 됨.
	int i = 0;
	while (i < k) {
		next_a = pre_b;
		next_b = pre_a + pre_b;
		pre_a = next_a;
		pre_b = next_b;
		i++;
	}
	printf("%d %d", next_a, next_b);
	return 0;
}