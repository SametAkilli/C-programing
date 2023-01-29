#include <stdio.h>

int main() {
    int number = 5;
    int *pointer_to_number;

    pointer_to_number = &number;

    printf("Address of number: %p\n", &number);
    printf("Value of pointer_to_number: %p\n", pointer_to_number);
    printf("Value of number: %d\n", *pointer_to_number);

    return 0;
}

