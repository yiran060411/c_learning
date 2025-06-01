#include <stdio.h>

int has_seven(int x) {
    while (x) {
        if (x % 10 == 7) return 1;
        x /= 10;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int skip[4] = {0}; // 甲乙丙丁
    int count = 0, num = 1;
    while (count < n) {
        int player = (num - 1) % 4;
        if (num % 7 == 0 || has_seven(num)) {
            skip[player]++;
        } else {
            count++;
        }
        num++;
    }
    for (int i = 0; i < 4; i++) {
        printf("%d\n", skip[i]);
    }
    return 0;
}