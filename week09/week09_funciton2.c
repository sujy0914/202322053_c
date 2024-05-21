#include <stdio.h>

int add(int num1, int num2);

int main() {
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    int sum = add(a,b);
    
    printf("%d", sum);

    return 0;
}

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}