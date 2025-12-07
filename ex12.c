#include <stdio.h>

int main() {
    int n;
    long long result = 1;

    do {
        scanf("%d", &n);
    } while (n < 0 || n > 20);

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    printf("%lld\n", result);

    return 0;
}
