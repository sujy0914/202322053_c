#include <stdio.h>

int main(void)
{    
    int num1, num2, result;                             //정수형 변수 3개 선언
    result = 0;

    printf("두 개의 정수 입력:");                       //화면에 문장 출력
    scanf("%d %d", &num1, &num2);
    
    result = num1 + num2;                               //뺄셈 연산의 결과값을 cha 변수에 대입
    printf("%d + %d = %d\n", num1, num2, result);

    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);

    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);

    result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result);

}