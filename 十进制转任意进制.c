#include <stdio.h>

void convertToBase(int n, int base) {
    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    if (n >= base) {
        convertToBase(n / base, base);
    }
    printf("%c", digits[n % base]);
}

int main() {
    int dec, base;
    scanf("%d", &dec);
    scanf("%d", &base);
    convertToBase(dec, base);
    printf("\n");
    return 0;
}