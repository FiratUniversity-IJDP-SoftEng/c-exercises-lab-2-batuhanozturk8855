#include <stdio.h>

int main() {
    int numbers[20];
    int index = 0;
    int i;

    for (i = 99; i >= 51; i -= 3) {
        numbers[index] = i;
        index++;
    }

    for (i = 0; i < index; i++) {
        printf("%d", numbers[i]);
        if (i != index - 1) {
            printf(", ");
        }
    }

    return 0;
}
