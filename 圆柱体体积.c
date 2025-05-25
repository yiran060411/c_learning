#include <stdio.h>

int main(){
    double r, h, v;
    scanf("%lf %lf", &r, &h);
    v = (3.14159) * r * r * h;
    printf("%.3f\n", v);
    return 0;
}