#include <stdio.h>

int main(void)
{

    char ch;                        //문자형 변수 선언
    char str[10];                   //배열을 이용한 문자열형 변수 선언

    printf("1. 문자 입력:");        //화면에 문장 출력
    scanf("%c", &ch, sizeof(ch));  //입력한 문자 변수를 메모리 주소에 저장

    printf("2. 문자열 입력:");      //화면에 문장 출력
    scanf("%s", str, sizeof(str));  //배열로 문자열을 입력받을 때는 & 생략

    printf("입력한 문자 출력:%c\n", ch);
    printf("입력한 문자열 출력:%s\n", str);
    return 0;

    printf("----------------------------------------------");

    for(int i = 1; i <= 5; i++)
    {   
        for(int j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}