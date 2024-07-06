#include <stdio.h>
#include <string.h>

int main() {
	char S[1000000] = { 0 };
	char number[26] = { 'A','B','C','D','E','F','G','H','I','J',
	'K','L','M','N','O','P','Q','R','S','T','U','V','W',
	'X','Y','Z' };
	int alphabet[26] = { 0 }; //알파벳의 개수

	scanf("%s", S);
	int length = strlen(S);
	int i = 0;
	while (i < length) {
		switch (S[i]) {
		case 'a':case 'A':
			alphabet[0]++;
			break;
		case 'b':case'B':
			alphabet[1]++;
			break;
		case 'c':case'C':
			alphabet[2]++;
			break;
		case 'd':case'D':
			alphabet[3]++;
			break;
		case 'e':case'E':
			alphabet[4]++;
			break;
		case 'f':case'F':
			alphabet[5]++;
			break;
		case 'g':case 'G':
			alphabet[6]++;
			break;
		case 'h':case'H':
			alphabet[7]++;
			break;
		case 'i':case'I':
			alphabet[8]++;
			break;
		case 'j':case'J':
			alphabet[9]++;
			break;
		case 'k':case'K':
			alphabet[10]++;
			break;
		case 'l':case'L':
			alphabet[11]++;
			break;
		case 'm':case'M':
			alphabet[12]++;
			break;
		case 'n':case'N':
			alphabet[13]++;
			break;
		case 'o':case'O':
			alphabet[14]++;
			break;
		case 'p':case'P':
			alphabet[15]++;
			break;
		case 'q':case'Q':
			alphabet[16]++;
			break;
		case 'r':case'R':
			alphabet[17]++;
			break;
		case 's':case'S':
			alphabet[18]++;
			break;
		case 't':case'T':
			alphabet[19]++;
			break;
		case 'u':case'U':
			alphabet[20]++;
			break;
		case 'v':case'V':
			alphabet[21]++;
			break;
		case 'w':case'W':
			alphabet[22]++;
			break;
		case 'x':case'X':
			alphabet[23]++;
			break;
		case 'y':case'Y':
			alphabet[24]++;
			break;
		case 'z':case'Z':
			alphabet[25]++;
			break;
		}
		i++;
	}
	/*가장 많이 사용된 알파벳 개수 찾기*/
	int max = 0;
	int num = 0; //번호(알파벳과 매칭 위함.)
	for (int i = 0; i < 26; i++) {
		if (max < alphabet[i]) {
			max = alphabet[i];
			num = i;
		}
	}
	/*가장 많이 사용된 알파벳이 여러 개인지 판별*/
	int count = 0; 
	for (int j = 0; j < 26; j++) {
		if (max == alphabet[j])
			count++;
	}
	if (count == 1) {
		printf("%c", number[num]);
	}
	else
		printf("?");

	return 0;
}