#include <stdio.h>
#include <stdlib.h>

struct myArray {
    int len;
    int data[];
};

int main()
{
    int len = 0;
    printf("Enter size of array: \n");
    scanf("%d", &len);

    struct myArray *arr = NULL;
    arr = malloc(sizeof(struct myArray) + (len * sizeof(int)));
    arr->len = len;
    for (int i = 0; i < len; i++) {
        arr->data[i] = 5 * i;
    }

    for (int i = 0; i < len; i++) {
        printf("%d ", arr->data[i]);
    }
}