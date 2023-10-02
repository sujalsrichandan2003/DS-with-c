//#include<stdio.h>
//#define n 10
//int queue[n];
//int front = -1;
//int rear = -1;
//
//void insert(int x)
//{
//    if (rear==n-1)
//    {
//        printf("queue is full \n");
//    }
//    else if(front==-1 && rear==-1)
//    {
//        front=rear=0;
//        queue[rear]=x;
//    }
//}
//
//void delet()
//{
//    if(front==-1 && rear==-1)
//    {
//        printf("queue is empty \n");
//    }
//    else if(front==rear)
//    {
//       // printf("%d",queue[front]);
//        front=rear=-1;
//    }
//    else
//    {
//        front++;
//    }
//}
//
//void display()
//{
//    int i;
//    if(front==-1 && rear==-1)
//    {
//        printf("queue is empty \n");
//    }
//    else
//    {
//        for(i=front;i<rear+1,i++;)
//        {
//            printf("%d",queue[i]);
//        }
//    }
//}
//
//int main()
//{
//    printf("insert number:\n");
//    insert(1);
//    insert(6);
//    insert(9);
//    //delet();
//    insert(5);
//    insert(7);
//    insert(8);
//    //delet();
//    display();
//}

#include<stdio.h>
# define max 10
int queue[max];  
int front = -1; 
int rear = -1;  
int insert(int ele){
   if (rear == max - 1)  
    {
        printf("Queue is full\n");
    }
    if (front == -1)  
        front = 0;
    rear++;
    queue[rear] = ele;
    printf("The inserted element is %d\n",ele);
	
}  
int delt()
{
    int item;
    if (front == -1 || front > rear)  
    {
        printf("Queue is empty\n");
        return -1;  
    }
    item = queue[front]; 
    front++; 
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
	insert(1);
	insert(6);
	insert(9);
	delt();
	insert(5);
	insert(7);
	insert(8);
	delt();
	display();
}

