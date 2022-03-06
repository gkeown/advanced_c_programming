#include <stdio.h>

int main() {
    int numbers[100] = {1, 2, 3, [3 ... 9] = 10, [10] = 80, 15, [70] = 50};

    for (int i = 0; i < 20; i++) {
        printf("%d ", numbers[i]);
        printf("\n");
    }

    size_t size = sizeof numbers / sizeof(numbers[0]);
    printf("Array size: %zu\n", size);
}