#include <stdio.h>

int main(void)
{

    char op1, op2;

    printf("문자 2개를 연속해서 입력하세요.\n");
    printf("1. 첫 번째 문자 입력: ");
    scanf("%c", &op1, sizeof(op1));

    getchar();
    printf("2. 두 번째 문자 입력: ");
    scanf("%c", &op2, sizeof(op2));

    printf("첫 번째 문자 출력: %c\n", op1);
    printf("두 번째 문자 출력: %c\n", op2);
    return 0;
}