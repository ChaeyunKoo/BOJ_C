#include <stdio.h>
#include <stdlib.h>

//동적할당으로 선언해야 할 듯...
//호텔의 층수 범위가 1이상이면 되기 때문에
//먼저 크기를 지정해줄 수 없음.(조건에 어긋날 가능성O)
//int arr[][100];

int main() {
	int t = 0; //테스트케이스 개수
	int h = 0; //호텔의 층 수
	int w = 0; //각 층의 방 수
	int n = 0; //몇 번째 손님인지?
	int count = 0; //배정된 방 번호를 출력하기 위한 변수

	int result = 0; //출력할 방 번호

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);

		//2차원 배열 동적 할당
		int height = h, width = w;
		int** arr;
		arr = (int**)malloc(sizeof(int*) * height);
		for (int i = 0; i < height; i++) {
			arr[i] = (int*)malloc(sizeof(int) * width);
		}

		int k = 1; //층수를 나타내는 Y와 동일한 수 
		           // > 방 번호를 배열에 넣기 위해 필요한 변수
		for (int i = height - 1; i >= 0; i--) {
			for (int j = 0; j < width; j++) {
				arr[i][j] = (k * 100) + j + 1;
			}
			k++;
		}

		//손님에게 방 배정하기
		for (int i = 0; i < width; i++) {
			for (int j = height - 1; j >= 0; j--) {
				count++;
				if (count == n) {
					result = arr[j][i];
				}
			}
		}
		printf("%d", result);
		if (i != t - 1) {
			printf("\n");
		}

		//동적할당 해제
		for (int i = 0; i < height; i++) {
			free(arr[i]);
		}
		free(arr);

		//사용한 모든 변수 초기화
		h = 0, w = 0, n = 0, k = 0,
		height = 0, width = 0, count = 0, result = 0;
	}
	return 0;
}