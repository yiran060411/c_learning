#include <stdio.h>
#include <string.h>

void exchange(char *str){
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start--;
        end++;
    }
}

int main(){
    char input[51];
    scanf("%[^\n]", input);
    exchange(input);
    printf("%s\n", input);
    return 0;
}