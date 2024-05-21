#include <stdio.h>
/* 정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램*/

int main() {

    int a = 0;

    scanf("%d", &a);

    if(a > 0) {
        for(int i = 1; i <= a; i++) {
            printf("%d", i);
        }
    }
    return 0;
}