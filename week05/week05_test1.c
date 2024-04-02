#include <stdio.h>

int main() {
    int num1;

    printf("단을 입력하시오: ");
    scanf("%d", &num1);

/*     for (int i=1; i <= 9; i++) {
        printf("%d * %d = %d\n", num1, i, num1 * i);            //반복문 안에서는 웬만하면 선언x
    } */

    int i = 1;
    while(i <= 9) {
        printf("%d * %d = %d\n", num1, i, num1 * i);
        i++;
    }
    
    return 0;
}