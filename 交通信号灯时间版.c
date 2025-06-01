#include <stdio.h>

int main() {
    int state, T;
    scanf("%d%d", &state, &T);

    int time[3] = {30, 25, 5}; 

    int now = state;
    while (T >= time[now]) {
        T -= time[now];
        now = (now + 1) % 3;
    }

    if (now == 0) printf("RED\n");
    else if (now == 1) printf("GREEN\n");
    else printf("YELLOW\n");

    return 0;
}