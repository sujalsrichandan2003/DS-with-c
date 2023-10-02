#include <stdio.h>
#define size 5
char stack[size];
int top = -1;

void push(char val) {
    if (top == size - 1) {
        printf("Stack is full. Cannot push %c\n", val);
    } else {
        top++;
        stack[top] = val;
        printf("\nSuccessfully inserted the element %c\n", val);
    }
}

char pop() {
    if (top == -1) {
        printf("Stack is empty. Cannot pop\n");
        return '\0';  // Return a null character to indicate empty stack
    } else {
        char val = stack[top];
        top--;
        return val;
    }
}

int main() {
    push('l');
    push('a');
    push('j');
    push('u');
    push('s');

    printf("\nReversed string: ");
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}

