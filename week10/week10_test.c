#include <stdio.h>

int Sum(int n);

int main() {
    int num;

    scanf("%d", &num);

    int sum = Sum(num);

    printf("1부터 %d까지의 합: %d", num, sum);
}

int Sum(int n) {
    if(n == 1) {
        return 1;
    }
    return n + Sum(n-1);
}