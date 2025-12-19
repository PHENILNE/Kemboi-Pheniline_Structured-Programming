#include <stdio.h>

int main() {

    int count = 10;

    int *pCount;
    pCount = &count;


    printf("Initial value of count: %d\n", count);
    printf("Address stored in pCount: %p\n", (void*)pCount);
    printf("Value accessed via pCount before modification: %d\n\n", *pCount);


    *pCount = 25;


    printf("After modification using pointer:\n");
    printf("Updated value of count: %d\n", count);
    printf("Value accessed via pCount after modification: %d\n", *pCount);
    printf("\nAddress of count: %p\n", (void*)&count);
    printf("Address stored in pCount: %p\n", (void*)pCount);
    printf("Are they the same? %s\n", (&count == pCount) ? "Yes" : "No");

    return 0;
}
