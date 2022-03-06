#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void error_recover() {
    printf("Detected error - recover.\n");
    longjmp(buf, 1);
}

int main()
{
    while (1) {
        if (setjmp(buf)) {
            printf("in main\n");
            break;
        } else {
            error_recover();
        }
    }
}