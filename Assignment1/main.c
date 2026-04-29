#include <stdio.h>
#include <string.h>

#define CAPACITY 20

typedef struct {
    char data[CAPACITY];
    int start;
    int end;
    int count;
} CircularQueue;

void setup(CircularQueue *q) {
    q->start = 0;
    q->end = 0;
    q->count = 0;
}

int empty(const CircularQueue *q) {
    return q->count == 0;
}

int full(const CircularQueue *q) {
    return q->count == CAPACITY;
}

void push(CircularQueue *q, char ch) {
    if (full(q)) {
        puts("Queue overflow!");
        return;
    }
    q->data[q->end] = ch;
    q->end = (q->end + 1) % CAPACITY;
    q->count++;
}

char pop(CircularQueue *q) {
    if (empty(q)) {
        puts("Queue underflow!");
        return '\0';
    }
    char ch = q->data[q->start];
    q->start = (q->start + 1) % CAPACITY;
    q->count--;
    return ch;
}

int main() {
    CircularQueue q;
    setup(&q);

    char name[50];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    strcat(name, "_CE_ESY");

    for (size_t i = 0; i < strlen(name); i++) {
        push(&q, name[i]);
    }

    char result[70];
    int i = 0;

    while (!empty(&q)) {
        result[i++] = pop(&q);
    }
    result[i] = '\0';

    printf("Output: %s\n", result);

    return 0;
}
