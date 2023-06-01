#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initializeStack(Stack* stack) {
    stack->top = -1;
}

int isStackEmpty(Stack* stack) {
    return stack->top == -1;
}

int isStackFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack* stack, int value) {
    if (isStackFull(stack)) {
        printf("Stack is full. Cannot push %d.\n", value);
        return;
    }

    stack->data[++(stack->top)] = value;
}

int pop(Stack* stack) {
    if (isStackEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }

    return stack->data[(stack->top)--];
}

void printStack(Stack* stack) {
    if (isStackEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

void initializeQueue(Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isQueueEmpty(Queue* queue) {
    return queue->front == -1;
}

int isQueueFull(Queue* queue) {
    return (queue->front == 0 && queue->rear == MAX_SIZE - 1) || (queue->front == queue->rear + 1);
}

void enqueue(Queue* queue, int value) {
    if (isQueueFull(queue)) {
        printf("Queue is full. Cannot enqueue %d.\n", value);
        return;
    }

    if (isQueueEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else if (queue->rear == MAX_SIZE - 1) {
        queue->rear = 0;
    } else {
        queue->rear++;
    }

    queue->data[queue->rear] = value;
}

int dequeue(Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    int value = queue->data[queue->front];

    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else if (queue->front == MAX_SIZE - 1) {
        queue->front = 0;
    } else {
        queue->front++;
    }

    return value;
}

void printQueue(Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    if (queue->front <= queue->rear) {
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->data[i]);
        }
    } else {
        for (int i = queue->front; i < MAX_SIZE;

