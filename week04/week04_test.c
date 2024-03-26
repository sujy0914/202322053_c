#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    printf("5개의 문자를 입력하시오.");

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d ", a+3);
    printf("%d ", b-3);
    printf("%d ", c*3);
    printf("%d ", d/3);
    printf("%d ", e%3);

    return 0;
}