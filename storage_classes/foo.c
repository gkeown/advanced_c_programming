#include <stdio.h>
extern int counter;

extern void display() {
    printf("Value of counter: %d\n", counter);
}