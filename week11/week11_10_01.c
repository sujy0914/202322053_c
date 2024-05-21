#include <stdio.h>

int main() {
    int score[5] = {87, 92, 89, 98, 78};    //배열 선언과 초기화

    for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {     //인덱스 5개 반복 출력
        printf("score[%d] = %d\n", i, score[i]);
    }

    return 0;
}