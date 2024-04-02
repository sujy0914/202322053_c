#include <stdio.h>

int main() {

    int sum = 0;

    for(int i = 1; i <=10; i++){
        sum += i;
        //printf("%d", sum);
    }
    printf("%d", sum);
    
/*     int i = 1;
    while (i <= 10) {
        sum += i;
        i++; 
    }
    printf("%d", sum); */

    return 0;
}