#include <stdio.h>

struct student{
    int id;
    char name[5];
    int score_1, score_2, score_3;
    double average;
};

int main() {
    struct student max, stu;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %d %d %d", &stu.id, stu.name, &stu.score_1, &stu.score_2, &stu.score_3);
        stu.average = (stu.score_1 + stu.score_2 + stu.score_3) / 3.0;
        if (max.average < stu.average) {
            max = stu;
        }
    }
    printf("%d %s %d %d %d %.2lf\n", max.id, max.name, max.score_1, max.score_2, max.score_3,max.average);
    return 0;
}