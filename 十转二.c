#include <stdio.h>

void binary(int n){
    if (n > 1){
        binary(n / 2);
    }
    printf("%d", n % 2);
}

int main(){
    int dec;
    scanf("%d", &dec);
    binary(dec);
    printf("\n");
    return 0;
}