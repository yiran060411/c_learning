#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_in = fopen("input.txt", "r");
    FILE *file_out = fopen("output.txt", "w");

    char buffer[10000];
    int lineNumber = 1;

    if (file_in == NULL)
    {
        perror("文件打开失败\n");
        return 1;
    }

    if (file_out == NULL)
    {
        perror("文件创建或输出失败\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file_in) != NULL)
    {
        fprintf(file_out, "%d: %s", lineNumber, buffer);
        lineNumber++;
    }

    fclose(file_in);
    fclose(file_out);

    return 0;
}