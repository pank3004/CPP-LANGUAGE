#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow. Cannot push element.\n");
        return;
    }
    stack[++top] = data;
}
