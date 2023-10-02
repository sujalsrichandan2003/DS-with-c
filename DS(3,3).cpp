#include<stdio.h>
#define size 5
char stack [5];
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

char pop()
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
int main ()
{
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
