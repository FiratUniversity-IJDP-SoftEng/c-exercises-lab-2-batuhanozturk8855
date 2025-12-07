#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return (long long)n * factorial(n - 1);
}

int main(void) {
    int n;

    do {
        scanf("%d", &n);
    } while (n < 0 || n > 20);

    printf("%lld\n", factorial(n));

    return 0;
}
