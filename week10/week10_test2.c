#include <stdio.h>

int main() {
    int n;
    char str[100];
    int sum = 0;
    scanf("%d", &n);
    scanf("%s", str);
    //printf("%c", str[1]);
    //printf("%ld", strlen(str));

    for(int i=0; i < strlen(str); i++) 
    {
        //printf("%d", str[i]);
        sum += str[i] - '0';
    }


    printf("%d", sum);
}