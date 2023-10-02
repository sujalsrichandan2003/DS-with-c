#include<stdio.h>
#define size 9
int stack [9];
int top =-1;
void push (int val)
{
	if (top==size-1)
	{
		printf("Stack is full. Cannot push %d\n");
	}
	else
	{
		top++;
		stack [top]=val;
		printf("\n Successfully inserted the element %d\n");	
	}
}
void pop() 
{
	if (top==-1)
	{
		printf("Stack is empty. Cannot pop\n");
	}
	else
	{
		top--;
		printf ("Popped %d from the stack\n");
	}
}

int peek() 
{
    if (top == -1) {
        printf("Stack is empty. Cannot peek\n");
        return -1;
    } 
	else 
	{
        return stack[top];
    }
}

void display() 
{
    if (top == -1) 
	{
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) 
		{
            printf("%d\n", stack[i]);
        }
    }
}
int main ()
{
	push(6);
	push(7);
	push(8);
	push(5);
	push(3);
	pop();
	push(10);
	pop();
	pop();
}
