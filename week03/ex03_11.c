#include <stdio.h>

int main(void)
{
    int num1, num2, hap;                                     //정수형 변수3개 선언

    printf("1.첫 번째 정수 입력:");                              //화면에 문장 출력
    scanf("%d", &num1);                                         //첫 번째 정수 입력

    printf("2.두 번째 정수 입력:");                              //화면에 문장 출력
    scanf("%d", &num2);                                         //두 번째 정수 입력

    hap = num1 + num2;
    printf("3.덧셈 결과: %d + %d = %d\n", num1, num2, hap);


    printf("---------------------------------\n");

    printf("%d + %d = %d\n", 3, 3, 6);
    printf("%d - %d = %d\n", 7, 4, 3);
    printf("%d * %d = %d\n", 2, 7, 14);
    printf("%d / %d = %d\n", 6, 2, 3);


    printf("---------------------------------\n");

    int a = 10;
    int b = 2;

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    return 0;
}