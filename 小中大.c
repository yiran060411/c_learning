#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[n-1];
    double mid;
    if (n % 2 == 1) {
        mid = a[n/2];
    } else {
        mid = (a[n/2 - 1] + a[n/2]) / 2.0;
        mid = round(mid * 10) / 10.0;
        if (fabs(mid - (int)mid) < 1e-6) {
            mid = (int)mid;
        }
    }

    if (min > max) {
        int t = min;
        min = max;
        max = t;
    }

    if (mid == (int)mid) {
        printf("%d %d %d\n", max, (int)mid, min);
    } else {
        printf("%d %.1f %d\n", max, mid, min);
    }
    return 0;
}