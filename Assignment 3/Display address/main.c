#include <stdio.h>

int main() {

    int num = 10;

    int *ptr;

    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("\nValue stored in ptr (address of num): %p\n", (void*)ptr);
    printf("Address of num: %p\n", (void*)&num);
    printf("\nValue accessed using *ptr (dereferenced value): %d\n", *ptr);

    return 0;
}
