#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex[20]; 
    scanf("%s", hex);
    long decimal = strtol(hex, NULL, 16);
    printf("%ld\n", decimal);
    return 0;
}