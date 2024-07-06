#include <stdio.h>
int main()
{
    int h = 0, m = 0, plus, g = 0;
    scanf("%d %d", &h, &m);
    scanf("%d", &plus);
    m += plus;
    if (m >= 60)
    {
        g = m / 60;
        m = m - 60 * g;
    }
    h = h + g;
    if (h >= 24)
    {
        h = h - 24;
    }
    printf("%d %d", h, m);
    return 0;
}