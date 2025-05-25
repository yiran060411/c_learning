#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *input_arr = (int *)malloc(n * sizeof(int));
    int *output_arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input_arr[i]);
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (input_arr[i] % 2 != 0)
        {
            output_arr[index] = input_arr[i];
            index++;
        }
    }

    if (index == 0)
    {
        printf("NULL");
    }
    else
    {
        for (int j = 0; j < index; j++)
        {
            printf("%d ", output_arr[j]);
        }
    }
    free(input_arr);
    input_arr = NULL;

    free(output_arr);
    output_arr = NULL;

    return 0;
}