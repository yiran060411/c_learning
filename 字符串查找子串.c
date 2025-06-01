#include <stdio.h>
#include <string.h>
int main()
{
    char zhu[100];
    char zi[100];
    for (int i = 0; i < 100; i++)
    {
        scanf("%s", &zhu[i]);
        scanf("%s", &zi[i]);
    }
    char *pos = strstr(zhu, zi);
    if (pos != NULL)
    {
        printf("%ld", pos - zhu);
    }
    else
    {
        printf("-1");
    }
    return 0;
}