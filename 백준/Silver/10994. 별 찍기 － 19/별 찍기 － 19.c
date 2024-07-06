#include <stdio.h>

int main() {
    int n = 0;
    int star_start[100] = { 0 };
    int star_end[100] = { 0 };

    scanf("%d", &n);

    int n_star = n;
    int line_num = 1;
    int line_num_arr = 1;

    //세로 전체 길이=8n-7
    //i는 line number
    for (int i = 1; i <= (8 * n - 7) / 2 + 1; i++) {
        if (i == 4 * line_num - 3) {
            for (int m = 1; m < 4 * n - 3; m++) {
                if (m == 1 && i != 1 && i != 8 * n - 7) {
                    printf("*");
                    star_start[line_num_arr]++;
                    star_end[line_num_arr]++;
                }
            }
            if (i > 1) {
                for (int m = 1; m < ((4 * n - 3) - (4 * n_star - 3)) / 4; m++) {
                    printf(" ");
                    printf("*");
                    star_start[line_num_arr]++;
                    star_end[line_num_arr]++;
                }
                printf(" ");
            }
            for (int m = 1; m <= 4 * n_star - 3; m++) {
                printf("*");
                star_end[line_num_arr]++;
            }
            for (int m = 1; m <= ((4 * n - 3) - (4 * n_star - 3)) / 4; m++) {
                printf(" ");
                printf("*");
            }
            printf("\n");
            n_star--;
            line_num++;
        }
        else if ((i > 4 * line_num - 3 || i <= 4 * (line_num + 1) - 3) && (i % 2 != 0)) {
            int t = 1;
            for (int k = 1; k <= star_start[line_num_arr] + 1; k++) {
                if (k == star_start[t] + 1) {
                    for (int t = 1; t <= line_num_arr; t++)
                        printf("* ");
                }
            }
            for (int k = star_start[line_num_arr] + 2; k < star_end[line_num_arr] - 1; k++) {
                printf(" ");
            }
            for (int k = star_end[line_num_arr]; k <= 4 * n - 3; k++) {
                if (k == star_end[t]) {
                    for (int t = 1; t <= line_num_arr - 1; t++)
                        printf("* ");
                }
            }
            printf("*");
            printf("\n");
            line_num_arr++;
        }
    }
    n_star = 2;
    line_num_arr--;

    for (int i = (8 * n - 7) / 2 + 2; i <= 8 * n - 7; i++) {
        if (i == 4 * line_num - 3) {
            for (int m = 1; m < 4 * n - 3; m++) {
                if (m == 1 && i != 1 && i != 8 * n - 7) {
                    printf("*");
                }
            }
            if (i < 8 * n - 7) {
                for (int m = 1; m < ((4 * n - 3) - (4 * n_star - 3)) / 4; m++) {
                    printf(" ");
                    printf("*");
                }
                printf(" ");
            }
            for (int m = 1; m <= 4 * n_star - 3; m++) {
                printf("*");
            }
            for (int m = 1; m <= ((4 * n - 3) - (4 * n_star - 3)) / 4; m++) {
                printf(" ");
                printf("*");
            }
            if (i < 8 * n - 7)
                printf("\n");
            n_star++;
            line_num++;
        }
        else if ((i > 4 * line_num - 3 || i <= 4 * (line_num + 1) - 3) && (i % 2 != 0)) {
            int t = 1;
            for (int k = 1; k <= star_start[line_num_arr] + 1; k++) {
                if (k == star_start[t] + 1) {
                    for (int t = 1; t <= line_num_arr; t++)
                        printf("* ");
                }
            }
            for (int k = star_start[line_num_arr] + 2; k < star_end[line_num_arr] - 1; k++) {
                printf(" ");
            }
            for (int k = star_end[line_num_arr]; k <= 4 * n - 3; k++) {
                if (k == star_end[t]) {
                    for (int t = 1; t <= line_num_arr - 1; t++)
                        printf("* ");
                }
            }
            printf("*");
            printf("\n");
            line_num_arr--;
        }
    }
    return 0;
}