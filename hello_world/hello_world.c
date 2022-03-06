#include <stdio.h>
int main() {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        count += 10;
    }
    printf("Hello world! Count = %d\n", count);
    return 0;
}