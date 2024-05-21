#include <stdio.h>

void fortune_cookie(char msg[]) {
    printf("Message reads: %s\n", msg);
    printf("msg occupies %li bytes\n", sizeof(msg));        //long int: 10, 8, 16진수 표현
}

int main() {
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);

    return 0;
}