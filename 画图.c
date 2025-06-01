#include <stdio.h>

int main()
{
    int n;
    int painted[101][101] = {{0}};
    int total_area = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int x = x1; x < x2; x++)
        {
            for (int y = y1; y < y2; y++)
            {
                if (painted[x][y] == 0)
                {
                    painted[x][y] = 1;
                    total_area++;
                }
            }
        }
    }
    printf("%d\n", total_area);
    return 0;
}