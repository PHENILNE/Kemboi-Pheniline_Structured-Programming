#include <stdio.h>
#include <string.h>

int main()
{

    char text[100];
    int length;

    printf("Enter a string: ");
    scanf("%99s", text);   // safe scan

    printf("You entered: %s\n", text);

    length = strlen(text);
    printf("Length of the string: %d\n", length);

    return 0;
}




