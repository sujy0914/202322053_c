#include <stdio.h>

int main() {

    int jumsu;
    char grade;

    printf("점수 입력: ");
    scanf("%d", &jumsu);

    if(jumsu >= 90) {
        grade = 'A';
    }
    else if(jumsu >= 80) {
        grade = 'B';
    }
    else if(jumsu >= 70) {
        grade = 'C';
    }
    else {
        grade = 'F';
    }

    printf("등급은: %c", grade);
    return 0;
}