#include <stdio.h>

int main() {
    int numbers[20]; // fazladan tuttuk, önemli değil
    int index = 0;
    int i;

    for (i = 99; i >= 51; i -= 3) {
        numbers[index] = i;
        index++;
    }

    // Yazdırma
    for (i = 0; i < index; i++) {
        printf("%d", numbers[i]);
        if (i != index - 1) {
            printf(", ");
        }
    }

    return 0;
}
