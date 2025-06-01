#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int task;
    char s[1010];
    scanf("%d", &task);
    scanf("%s", s);

    if (task == 1) {
        // 压缩
        int len = strlen(s);
        for (int i = 0; i < len; ) {
            int j = i + 1;
            while (j < len && s[j] == s[i]) j++;
            int cnt = j - i;
            if (cnt >= 2)
                printf("%c%d", s[i], cnt);
            else
                printf("%c", s[i]);
            i = j;
        }
        printf("\n");
    } else {
        // 解压
        int len = strlen(s);
        for (int i = 0; i < len; ) {
            if (islower(s[i])) {
                printf("%c", s[i]);
                int j = i + 1;
                int num = 0;
                while (j < len && isdigit(s[j])) {
                    num = num * 10 + (s[j] - '0');
                    j++;
                }
                if (num > 1) {
                    for (int k = 1; k < num; k++)
                        printf("%c", s[i]);
                }
                i = (num > 0) ? j : i + 1;
            }
        }
        printf("\n");
    }
    return 0;
}