#include <stdio.h>

int main() {
    int value;
    scanf("%d", &value);
    int A[value];
    for(int i = 0; i < value; i++) {
        scanf("%d", &A[i]);
    }

    for(int i = value-1; i >= 0; i--) {
        printf("%d", A[i]);
    }

    return 0;
}