#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int id;
    float score;
} student;

int main()
{
    FILE *file_in = fopen("input.txt", "r");
    FILE *student_file = fopen("students.dat", "wb");
    FILE *average_file = fopen("average.dat", "wb");

    if (file_in == NULL || student_file == NULL || average_file == NULL)
    {
        perror("文件失败\n");
        return 1;
    }

    int n;
    float average, sum = 0.0;
    student student;

    fscanf(file_in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf(file_in, "%d %f", &student.id, &student.score);
        fwrite(&student, sizeof(student), 1, student_file);
        sum += student.score;
    }

    average = sum / n;
    fwrite(&average, sizeof(float), 1, average_file);

    fclose(file_in);
    fclose(student_file);
    fclose(average_file);

    return 0;
}