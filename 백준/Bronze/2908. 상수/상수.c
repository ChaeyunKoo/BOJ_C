#include <stdio.h>

int main() {
	int A[3] = { 0 };
	int B[3] = { 0 };
	int copy_A[3] = { 0 };
	int copy_B[3] = { 0 };
	int on = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%1d", &A[i]);
	}
	for (int i = 0; i < 3; i++) {
		scanf("%1d", &B[i]);
	}

	int i = 0;
	int j = 2;
	while (i < 3) {
		copy_A[i] = A[j];
		copy_B[i] = B[j];
		i++;
		j--;
	}

	for (i = 0; i < 3; i++) {
		if (copy_A[i] != copy_B[i]) {
			if (copy_A[i] > copy_B[i]) {
				on = 1;
			}
			else
				on = -1;
			break;
		}
	}
	switch (on) {
	case 1:
		for (i = 0; i < 3; i++) {
			printf("%d", copy_A[i]);
		}
		break;
	case -1:
		for (int i = 0; i < 3; i++) {
			printf("%d", copy_B[i]);
		}
		break;
	}
	return 0;
}