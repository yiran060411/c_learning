#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    if (n == 0)
    {
        if (m % 3 == 1)
        {
            printf("GREEN");
        } else if (m % 3 == 2) {
            printf("YELLOW");
        } else if(m % 3 == 0) {
            printf("RED");
        }
    }
    
    if (n == 1)
    {
        if (m % 3 == 2)
        {
            printf("GREEN");
        } else if (m % 3 == 0) {
            printf("YELLOW");
        } else if(m % 3 == 1) {
            printf("RED");
        }
    }

    if (n == 2)
    {
        if (m % 3 == 0)
        {
            printf("GREEN");
        } else if (m % 3 == 1) {
            printf("YELLOW");
        } else if(m % 3 == 2) {
            printf("RED");
        }
    }

    return 0;
}