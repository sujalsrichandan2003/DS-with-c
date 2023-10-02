#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*traversal(struct node*ptr)
 {
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
 
int main(){

	struct node*head = (struct node*)malloc(sizeof(struct node));
	
	struct node*one = (struct node*)malloc(sizeof(struct node));
    one->data = 10;
    
    struct node*second=(struct node*)malloc(sizeof(struct node));
    second->data = 30;
     
    struct node*third=(struct node*)malloc(sizeof(struct node));
    third->data = 20;
     
    struct node*fourth=(struct node*)malloc(sizeof(struct node));
    fourth->data = 40;

    struct node*fifth=(struct node*)malloc(sizeof(struct node));
    fifth->data = 50;
    
    head = one;
    one->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
 
    printf("Original List: ");
    traversal(head);
    
    int sum=0;
     struct node* ptr = head;

    while (ptr != NULL) {
        sum += ptr->data;
        ptr = ptr->next;
    }
    
    printf("sum of all elements in the list is:%d",sum);  
    return 0;
}
