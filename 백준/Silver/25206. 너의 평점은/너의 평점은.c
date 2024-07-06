#include <stdio.h>
#include <string.h>

int main() {
	char S[52] = { 0 }; //과목명
	double credit = 0; //학점
	char score[4] = { 0 }; //등급
	double grade = 0; //과목평점
	double credit_sum = 0; //학점의 총합
	double cg_sum = 0; //학점*과목평점의 총합

	int i = 0;
	while (i < 20) {
		scanf("%s %lf %s", S, &credit, score);
		
		if (score[0] != 'P') {
			credit_sum += credit;
		}

		switch (score[0]) {
		case 'A': {
			grade = 4.0;
			break;
		}
		case 'B': {
			grade = 3.0;
			break;
		}
		case 'C': {
			grade = 2.0;
			break;
		}
		case 'D': {
			grade = 1.0;
			break;
		}
		case 'F': {
			grade = 0.0;
			break;
		}
		}
		switch (score[1]) {
		case '+': {
			grade += 0.5;
			break;
		}
		}
		cg_sum += credit * grade;
		grade = 0.0;
		i++;
	}
	printf("%f", cg_sum / credit_sum);
	return 0;
}