#include <stdio.h>

void display(size_t len, int arr[])
{
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    size_t arr_len = 0;
    printf("Length of array?\n");
    scanf("%zu", &arr_len);
    int myArray[arr_len];
    int val = 0;
    for (int i = 0; i < arr_len; i++) {
        printf("Entry %d: \n", i);
        scanf("%d", &val);
        myArray[i] = val;
    }
    display(arr_len, myArray);
}