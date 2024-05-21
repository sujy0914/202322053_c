#include <stdio.h>

void Line();

int main() {
    Line();
    printf("Line 함수를 호출하였습니다.\n");
    printf("Line 함수를 다시 호출합니다.\n");
    Line();

    return 0;
}

void Line() {
    printf("==============================\n");
}