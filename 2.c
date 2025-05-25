#include <stdio.h>

union zf
{
    int a;
    float b;
};

int main()
{
    union zf data;
    int c;
    scanf("%d", &c);
    if (c == 1)
    {
        scanf("%d", &data.a);
        printf("%f", data.b);
    }
    else if (c == 2)
    {
        scanf("%f", &data.b);
        printf("%d", data.a);
    }
    return 0;
}