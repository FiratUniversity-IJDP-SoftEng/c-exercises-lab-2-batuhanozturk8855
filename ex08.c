#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    double average;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    average = (double)sum / 10;
    printf("%d\n", sum);
    printf("%.2f\n", average);

    return 0;
}
