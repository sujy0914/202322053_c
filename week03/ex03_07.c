#include <stdio.h>

int main(void)
{
    printf("|%d|", 358);
    printf(": 정수형 기본 자릿수\n");

    printf("|%5d|", 358);
    printf(": 전체 자릿수 5개\n");

    printf("|%05d|", 358);
    printf(": 전체 자릿수는 5개고 빈칸은 0으로 채움\n");
    return 0;
}