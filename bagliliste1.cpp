#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
    int front;
    int rear;
} StackQueue;

void initializeStackQueue(StackQueue* sq) {
    sq->top = -1;
    sq->front = -1;
    sq->rear = -1;
}

int isStackQueueEmpty(StackQueue* sq) {
    return sq->top == -1 && sq->front == -1 && sq->rear == -1;
}

int isStackQueueFull(StackQueue* sq) {
    return sq->top == MAX_SIZE - 1 || sq->rear == MAX_SIZE - 1;
}

void push(StackQueue* sq, int value) {
    if (isStackQueueFull(sq)) {
        printf("StackQueue is full. Cannot push %d.\n", value);
        return;
    }
    
    if (isStackQueueEmpty(sq)) {
        sq->top = 0;
        sq->front = 0;
        sq->rear = 0;
    } else {
        sq->top++;
        sq->rear++;
    }
    
    sq->data[sq->top] = value;
}

int pop(StackQueue* sq) {
    if (isStackQueueEmpty(sq)) {
        printf("StackQueue is empty. Cannot pop.\n");
        return -1;
    }
    
    int value = sq->data[sq->front];
    
    if (sq->front == sq->rear) {
        sq->top = -1;
        sq->front = -1;
        sq->rear = -1;
    } else {
        sq->front++;
    }
    
    return value;
}

void printStackQueue(StackQueue* sq) {
    if (isStackQueueEmpty(sq)) {
        printf("StackQueue is empty.\n");
        return;
    }
    
    printf("StackQueue elements: ");
    for (int i = sq->front; i <= sq->rear; i++) {
        printf("%d ", sq->data[i]);
    }
    printf("\n");
}

int main() {
    StackQueue sq;
    initializeStackQueue(&sq);

    int choice, value;
    do {
        printf("StackQueue Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print StackQueue\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(&sq, value);
                break;
            case 2:
                value = pop(&sq);
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;
            case 3:
                printStackQueue(&sq);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("\n");
    } while (choice != 0);

    return 0;
}

