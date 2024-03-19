#include <stdio.h>

int main(void)
{
    int num;                                 //정수형 변수 선언
    printf("1.정수 입력:");                  //화면에 문장 출력
    scanf("%d", &num);                      //입력받은 값을 메모리 주소에 저장
    printf("2.키보드로 입력받은 값은 %d입니다.\n", num);
    return 0;
}