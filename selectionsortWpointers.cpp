#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int *arr, int n);

int main() {
    int arr[20];
    int i;

    srand(time(NULL)); 

    
    for (i = 0; i < 20; i++) {
        arr[i] = rand() % 101;
    }

    printf("Dizinin elemanlari = ");
    for (i = 0; i < 20; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    
    selection_sort(arr, 20);

    printf("Siralanan elemanlar ");
    for (i = 0; i < 20; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}

void selection_sort(int *arr, int n) {
    int i, j, max, temp;

    for (i = 0; i < n - 1; i++) {
        max = i;
        for (j = i + 1; j < n; j++) {
            if (*(arr + j) > *(arr + max)) {
                max = j;
            }
        }
       
        temp = *(arr + i);
        *(arr + i) = *(arr + max);
        *(arr + max) = temp;
    }
}

