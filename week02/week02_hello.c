/*두 개의 숫자의 합을 계산하는 프로그램*/
#include <stdio.h>
// #define S(x)   S(p+1)      x*x ==> 9    (x)*(x) ==> 25
int main(void)
{

        int x; //첫 번째 정수를 저장할 변수
        int y; //두 번째 정수를 저장할 변수
        int sum; //두 정수의 합을 저장하는 변수
        x = 100;
        y = 200;
        sum = x + y;
        // int p;
        // p = 4;
        // printf("%d", S(p+1));
        printf("%d + %d = %d", x, y, sum);
        return 0;
}