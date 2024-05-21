#include <stdio.h>

int main() {
    int x, n;

    scanf("%d %d", &n, &x);
    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        if(a[i] < x) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
