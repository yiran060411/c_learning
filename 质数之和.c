#include <stdio.h>

int is_prime(int num){
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (is_prime(i)){
            sum += i;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}