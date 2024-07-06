#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int max = 0;
    int prev = 0;

    for (int i = 0; i < N; i++) {
        int height;
        scanf("%d", &height);

        if (height >= max) {
            max = height;
            count++;
        }
        else if (height >= prev) {
            count++;
        }

        prev = height;
    }

    printf("%d", count);
    return 0;
}
