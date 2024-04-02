#include <stdio.h>

int main() {

    int x, y;
    char op;
    printf("입력: ");
    scanf("%d %c %d", &x, &op, &y);

/*     if(op == '+') {
        printf("%d %c %d = %d", x, op, y, x + y);
    }
    else if(op == '-') {
        printf("%d %c %d = %d", x, op, y, x - y);
    }
    else if(op == '*') {
        printf("%d %c %d = %d", x, op, y, x * y);
    }
    else if(op == '/') {
        printf("%d %c %d = %d", x, op, y, x / y);
    } */

    switch(op){
        case '+':
            printf("%d %c %d = %d", x, op, y, x + y);
            break;
        case '-':
            printf("%d %c %d = %d", x, op, y, x - y);
            break;
        case '*':
            printf("%d %c %d = %d", x, op, y, x * y);
            break;
        case '/':
            printf("%d %c %d = %d", x, op, y, x / y);
            break;
        default :
            printf("잘못된 연산자를 입력했습니다.");
            break;
    }

}