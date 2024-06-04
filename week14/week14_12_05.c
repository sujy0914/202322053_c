#include <stdio.h>

int hap(int a, int b);
int cha(int a, int b);

int main() {
    int result;
    int(*fp)(int, int);

    printf("100과 200의 덧셈 연산과 뺄셈 연산\n");

    fp = hap;
    result = fp(100, 200);
    printf("덧셈 연산 결과: %d\n", result);
    fp = cha;
    result = fp(100, 200);
    printf("뺄셈 연산 결과: %d\n", result);
    return 0;
}

int hap(int a, int b){
    int sum;

    printf("\n[hap() 함수 영역]\n\n");
    sum = a + b;
    return sum;
}

int cha(int a, int b) {
    int sub;

    printf("\n[cha() 함수 영역]\n\n");
    sub = a - b;
    return sub;
} 