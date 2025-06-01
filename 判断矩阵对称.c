#include <stdio.h>
#include <stdlib.h>

int isduichen(int n)
{
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (isduichen(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}