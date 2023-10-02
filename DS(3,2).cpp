#include<stdio.h>
#define size 5
int stack [5];
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
int main ()
{
	push(6);
	push(7);
	push(8);
	push(5);
	push(3);
}
