#include <stdio.h>

int main(void)
{

    int cnt;                //반복문에서 사용할 카운트 변수

    printf("알파벳 대문자가 출력됩니다.\n");

    for (cnt = 65; cnt <= 90; cnt++)
        printf("%c", cnt);

    printf("------------------------------------------\n");

    for(int i=1; i <= 5; i++)
    {
        for(int j=1; j<=i; j++)           //j <= i --증감식     
        {
            printf("*");
        }
        printf("\n");
    }

/*      i = 5; i >=1; i--
        j = 1; j <= i; j++              <=줄어든다. */
}