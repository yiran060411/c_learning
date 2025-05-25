#include <stdio.h>

union zf{
    int a;
    float b;
};

int main() {
    int n;
    union zf data;
    scanf("%d", &n);

    if (n == 1)
    {
        scanf("%d", &data.a);
        printf("%f", data.b);
    }
    
    if (n == 2)
    {
        scanf("%f", &data.b);
        printf("%d", data.a);
    }

    return 0;
}