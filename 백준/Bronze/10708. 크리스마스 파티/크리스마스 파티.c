#include <stdio.h>

int main()
{
	int n; //게임에 참여하는 인원
	int game; //게임 횟수
	int count = 0; //타겟 예측에 실패했을 시 카운팅
	int target_num[100] = { 0 }; //타겟의 번호(정답)
	int target_guess[100] = { 0 }; //참가자들이 예측한 타겟의 번호
	int score[100] = { 0 }; //참가자들의 누적 점수(->추후 출력)
	
	scanf("%d", &n);
	scanf("%d", &game);

	for (int i = 0; i < game; i++)
		scanf("%d", &target_num[i]);

	for (int i = 0; i < game; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &target_guess[j]);
		}
		for (int j = 0; j < n; j++) {
			if (target_num[i] == target_guess[j]) {
				score[j] += 1;
			}
			else {
				count++;
			}
		}
		score[target_num[i] - 1] += count;
		count = 0;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", score[i]);

	return 0;
}