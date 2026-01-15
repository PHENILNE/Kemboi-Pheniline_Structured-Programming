#include <stdio.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int head = 0;     // Points to the oldest element
int count = 0;    // Number of elements currently stored

/* Function to insert a new sensor sample */
void insertSample(int value) {
    int index;

    if (count < BUFFER_SIZE) {
        index = (head + count) % BUFFER_SIZE;
        buffer[index] = value;
        count++;
    } else {
        buffer[head] = value;          // Overwrite oldest
        head = (head + 1) % BUFFER_SIZE;
    }
}

/* Function to print samples in chronological order */
void printSamples() {
    int i, index;

    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    printf("Stored samples (oldest → newest): ");
    for (i = 0; i < count; i++) {
        index = (head + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Circular Data Logger ---\n");
        printf("1. Insert new sample\n");
        printf("2. Print stored samples\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter sensor value: ");
                scanf("%d", &value);
                insertSample(value);
                break;

            case 2:
                printSamples();
                break;

            case 3:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
