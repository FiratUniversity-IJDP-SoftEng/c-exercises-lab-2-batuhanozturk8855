#include <stdio.h>

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("%lld ", fibonacci(i));
    }
    
    printf("\n");

    return 0;
}
