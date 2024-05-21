#include <stdio.h>
#define AL 8

int b_s(int list[], int n, int input);

int main() {
    int sno[AL] = {3, 8, 15, 24, 35, 57, 68, 85};
    int input, serch;
    char yn;

    do {
        printf("\n초기> 배열 요소: 3 8 15 24 35 57 68 85\n");
        printf("숫자 입력: ");
        scanf("%d", &input);

        serch = b_s(sno, AL, input);
        printf("탐색 성공 인덱스: [%2d]\n", serch);

        re_input:
        printf("프로그램을 다시 실행하겠습니까?(Y/N): ");
        scanf(" %c", &yn, sizeof(yn));

        if(yn == 'N' || yn == 'n'){
            break;
        } else if(yn == 'Y' || yn == 'y') {
            continue;
        } else {
            printf("알파벳을 다시 입력하세요.\n");
            goto re_input;
        }
    } while(1);
        return 0; 
}

int b_s(int list[], int n, int input) {
    int low = 0;
    int high = n - 1;
    int md, cnt = 1;

    while (low <= high) {
        printf("%d회 이진 탐색: [%d %d]\n", cnt, low, high);

        md = (low + high) / 2;

        if(input == list[md]) {
            return md;
        } else if(input > list[md]) {
            low = md + 1;
        } else {
            high = md - 1;
        } 
        cnt++;
    }

    return -1;
}