#include<stdio.h>
# define max 10
int queue[max];  
int front = -1; 
int rear = -1;  
int cqinsert(int ele){
   if (rear == max - 1)  
    {
        printf("Queue is full\n");
    }
    if (front == -1)  
        front = 0;
    rear++;
    queue[rear % max] = ele;
    printf("The inserted element is %d\n",ele);
	
}  
int cqdelt()
{
    int item;
    if (front == -1 || front > rear)  
    {
        printf("Queue is empty\n");
        return -1;  
    }
    item = queue[front]; 
    front=(front+1)%max; 
    return item;
}
void display() 
{
    int i; 
    if (front == -1 && front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("The queue elements are:\n");
    for (i = front; i <= rear; i++)  
        printf("%d\n", queue[i]);
		 
}
int main(){
	printf("insert numbers: \n");
	cqinsert(1);
	cqinsert(6);
	cqinsert(9);
	cqdelt();
	cqinsert(5);
	cqinsert(7);
	cqinsert(8);
	cqdelt();
	display();
}
