#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char c;
    int n;
    int isdie = 0;
    int o, w;
    int i = 1;

    while (1) {
        scanf("%d %d", &o, &w);
        if (o == 0 && w == 0)
            break;
        isdie = 0;
        while (1) {
            scanf("%c %d", &c, &n);

            if (c == '#' && n == 0)
                break;
            else if (c == 'F') {
                w += n;
            }
            else if (c == 'E') {
                w -= n;
            }
            if (w <= 0) {
                isdie = 1;
            }
        }
        if (isdie == 1) {
            printf("%d RIP\n", i);
        }
        else if ((o / 2) < w && (o * 2) > w) {
            printf("%d :-)\n", i);
        }
        else {
            printf("%d :-(\n", i);
        }
        i++;
    }
    return 0;
}