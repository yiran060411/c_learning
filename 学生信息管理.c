#include <stdio.h>
#include <string.h>

struct student{
    char id[10];
    char name[10];
    float c;
};

int main(){
    int m;
    scanf("%d", &m);
    struct student max, stu;
    for (int i = 0; i < m; i++)
    {
        scanf("%s %s %f", stu.id, stu.name, &stu.c);
        if (i == 0)
        {
            max = stu;
        }
        else if (stu.c > max.c || (stu.c == max.c && strcmp(stu.id, max.id) < 0))
        {
            max = stu;
        }
    }
    printf("%s\n%s\n%.1f", max.id, max.name, max.c);
    return 0;
}