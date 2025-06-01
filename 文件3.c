#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");
    FILE *file_out = fopen("output.txt", "w");

    if (file1 == NULL || file2 == NULL || file_out == NULL)
    {
        perror("文件失败\n");
        return 1;
    }

    int num1[1000], num2[1000];
    int size1 = 0, size2 = 0, k = 0;
    int total[2000];

    while (fscanf(file1, "%d", &num1[size1]) != EOF)
    {
        size1++;
    }
    while (fscanf(file2, "%d", &num2[size2]) != EOF)
    {
        size2++;
    }

    for (int i = 0; i < size1; i++)
    {
        total[k++] = num1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        total[k++] = num2[i];
    }

    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
        {
            if (total[j] > total[j + 1])
            {
                int temp = total[j];
                total[j] = total[j + 1];
                total[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        fprintf(file_out, "%d\n", total[i]);
    }

    fclose(file1);
    fclose(file2);
    fclose(file_out);

    return 0;
}