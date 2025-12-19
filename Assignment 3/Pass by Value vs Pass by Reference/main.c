#include <stdio.h>


void incrementByValue(int num);
void incrementByReference(int *ptr);

int main() {
    int number = 5;

    printf("Initial value of number: %d\n\n", number);


    printf("Calling incrementByValue()...\n");
    incrementByValue(number);
    printf("After incrementByValue: number = %d\n", number);
    printf("(The original number remains unchanged because we passed a copy)\n\n");


    printf("Calling incrementByReference()...\n");
    incrementByReference(&number);
    printf("After incrementByReference: number = %d\n", number);
    printf("(The original number changed because we passed its address)\n\n");


    printf("Memory address of number in main(): %p\n", (void*)&number);

    return 0;
}
void incrementByValue(int num) {
    printf("  Inside incrementByValue():\n");
    printf("  Received value: %d\n", num);
    printf("  Memory address of parameter 'num': %p\n", (void*)&num);

    num = num + 1;

    printf("  After increment: %d\n", num);
    printf("  (This change only affects the local copy)\n");
}


void incrementByReference(int *ptr) {
    printf("  Inside incrementByReference():\n");
    printf("  Received address: %p\n", (void*)ptr);
    printf("  Value at that address: %d\n", *ptr);

    *ptr = *ptr + 1;

    printf("  After increment: value at address is now %d\n", *ptr);
    printf("  (This change affects the original variable in main())\n");
}
