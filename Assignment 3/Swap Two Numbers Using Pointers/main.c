#include <stdio.h>


void swapNumbers(int *ptr1, int *ptr2);

int main() {

    int a = 10;
    int b = 20;

    // Print values before swapping
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Address of a: %p\n", (void*)&a);
    printf("Address of b: %p\n", (void*)&b);

    // Call swapNumbers() by passing the addresses of a and b
    swapNumbers(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}


void swapNumbers(int *ptr1, int *ptr2) {
    printf("\nInside swapNumbers() function:\n");
    printf("Address received in ptr1: %p\n", (void*)ptr1);
    printf("Address received in ptr2: %p\n", (void*)ptr2);
    printf("Value at ptr1 (a's value): %d\n", *ptr1);
    printf("Value at ptr2 (b's value): %d\n", *ptr2);


    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping inside function:\n");
    printf("Value at ptr1 (a's new value): %d\n", *ptr1);
    printf("Value at ptr2 (b's new value): %d\n", *ptr2);
}
