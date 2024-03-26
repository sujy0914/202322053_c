#include <stdio.h>

int plus(int a, int b);                              //반환 자료형 = int
int minus(int a, int b);
int multi(int a, int b);
int divde(int a, int b);

int main()                                          //void = 돌려줄 게 없다 --> 매개변수로는 생략이 가능하다
{
    int a, b;
    int result;

    scanf("%d %d", &a, &b);                         //scanf = 표준 입력 함수  --\n 사용하면 안됨

    result = plus(a, b);
    printf("%d + %d = %d\n", a, b, result);
    
    result = minus(a, b);
    printf("%d - %d = %d\n", a, b, result);

    result = multi(a, b);
    printf("%d * %d = %d\n", a, b, result);

    result = divde(a, b);
    printf("%d / %d = %d\n", a, b, result);
    
    return 0;
}

int plus(int a, int b)                              //반환 자료형 = int
{
    return a + b;                                   //return은 값을 1개만 반환 가능
}

int minus(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

int divde(int a, int b)
{
    return a / b;
}