#include <stdio.h>

int get_inteager();

int main() {
    int a = get_inteager();
    int b = get_inteager();

    printf("%d + %d = %d", a, b, a+b);

    return 0;
}

int get_inteager() {
    int a;
    scanf("%d", &a);
    return a; 
}