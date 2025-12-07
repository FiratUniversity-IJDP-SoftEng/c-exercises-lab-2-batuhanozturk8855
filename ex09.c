#include <stdio.h>

int main() {
    int n;
    int count = 0;
    int sum = 0;
    double ort;

    while (1) {
        scanf("%d", &n);

        if (n == -1)
            break;

        sum += n;
        count++;
    }

    if (count > 0) {
        ort = (double)sum / count;
        printf("%d\n", count);
        printf("%d\n", sum);
        printf("%.2f\n", ort);
    }

    return 0;
}
