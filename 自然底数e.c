#include <stdio.h>

int main(){
    int n;
    double result = 1.0;
    double e = 1.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result *= i;
        e += 1.0 / result;
    }
    printf("%.6lf", e);
    return 0;
}