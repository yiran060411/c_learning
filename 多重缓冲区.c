#include <stdio.h>

int main(){
    char a;
    long b;
    char str[1000];
    scanf("%c %ld %[^\n]", &a, &b, str);
    printf("'%c'\n", a);
    printf("%ld\n", b);
    printf("%s\n", str);
    return 0;
}