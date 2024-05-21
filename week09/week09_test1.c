#include <stdio.h>
/* 0이 입력되면 반복문을 멈추고 그 전까지 입력받은 수들에 대하여
    홀수의 개수와 짝수의 개수를 출력하는 프로그램*/
int main() {
    int a = 0;
    
    int odd = 0;

    int avg = 0;

    int sum_odd = 0;

    int count = 0;


    while (1)
    {
        scanf("%d", &a);

        if(a == 0){
            break;
        }
        if(a > 0) {
            if(a % 2 == 1){
                odd += a;
                count += 1;
                avg = odd / count;
            }
        }
    }       
    printf("odd = %d ", odd);
    printf("홀수의 평균: %d", avg);

    return 0;
}