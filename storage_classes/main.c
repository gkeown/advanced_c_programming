#include <stdio.h>

int counter = 0;
void display(void);

int sum(int value) {
    static int sum = 0;
    sum += value;
    printf("Current sum: %d\n", sum);
    return sum;
}

int main(void) {
    int n;
    printf("How many times to you want to enter function?\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum(i);
    }

    for (; counter < 5; counter++) {
        display();
    }
}
// int main() {
    
//     int m;
//     scanf("%d", &m);
//     {
//         int i; // both m and i in scope
//         int n = 5;
//         for (i = m; i < n; i++) {
//             printf("i = %d\n", i);
//         }
//         foo();
//     }
//     return 0;
// }