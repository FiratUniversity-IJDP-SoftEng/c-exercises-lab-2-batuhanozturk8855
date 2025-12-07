#include <stdio.h>

int main(void) {
    int n;
    long long result = 1;

    do {
        printf("Please enter a number between 0 and 20: ");
        scanf("%d", &n);
    } while (n < 0 || n > 20);

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    printf("%lld\n", result);

    return 0;
}
