#include <stdio.h>

int main() {
    int y, d;
    scanf("%d%d", &y, &d);

    int is_leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (is_leap) month_days[1] = 29;

    int month = 1;
    for (int i = 0; i < 12; i++) {
        if (d > month_days[i]) {
            d -= month_days[i];
            month++;
        } else {
            break;
        }
    }

    printf("%d\n%d\n", month, d);
    return 0;
}