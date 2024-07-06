#include <stdio.h>

int arr[1000];
int h[1000]; //홀수를 저장할 배열
int main() {
	int n = 0; //사탕 묶음의 개수
	int result = 0, high = 0;
	int m = 0; 

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		result += arr[i];
	}
	/*총 사탕개수가 짝수라면 준석이는 모든 사탕을 살 수 있으므로
	result 변수값을 그대로 출력*/
	if (result % 2 == 0) {
		printf("%d", result);
	}
	/*총 사탕개수가 홀수라면 모든 사탕을 살 수 없음
	->> 총 개수(=result)에서 가장 작은 홀수 개 사탕값(=m)을 빼주면
	->> 준석이가 살 수 있는 사탕의 최대 개수 high가 됨*/
	else {
		//홀수 개인 사탕의 개수를 걸러내 배열 h에 저장
		//홀수 개 사탕 중, 최소값을 찾아내기 위한 for문.
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 == 1)
				h[i] = arr[i];
			else
				h[i] = 0;
		}
		//h 배열의 자리가 앞쪽부터 빈칸없이 채워지지 않았기 때문에,
		//최소값인 m을 찾기 위해 0이 아닌 값 중 아무 홀수 개 사탕값을 m에 우선적으로 넣음.
		//그리고 h 배열 중 0이 아닌, 즉 홀수 개 사탕값 중에서 가장 작은 값을 찾아 m에 최종적으로 넣음.
		for (int i = 0; i < n; i++) {
			if (h[i] != 0) { 
				m = h[i];
				break;
			}
		}
		for (int j = 0; j < n; j++) {
			if (h[j] != 0) {
				if (m > h[j])
					m = h[j];
			}
		}
		high = result - m;
		printf("%d", high);
	}
	return 0;
}