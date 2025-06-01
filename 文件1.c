#include <stdio.h>

int main()
{
    FILE *file_in = fopen("input.txt", "r");
    FILE *file_out = fopen("output.txt", "w");

    int count = 0;
    int word = 0;
    int c;

    if (file_in == NULL)
    {
        perror("文件打开失败");
        return 1;
    }

    while ((c = (fgetc(file_in))) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            word = 0;
        else
        {
            count++;
            word = 1;
        }
    }

    fclose(file_in);
    fprintf(file_out, "%d", count);
    fclose(file_out);
    return 0;
}