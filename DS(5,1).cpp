/*write a c program to implement a singly linked list and perform an insertion operation to insert a new node after a specific element in the list.*/
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
	
int insertAfter(struct node* ptr, int ele, int newData) {
    if (ptr == NULL) {
        printf("The ptr cannot be NULL.\n");
    }
    
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;
    
    while (ptr != NULL) {
        if(ptr->data == ele) 
		{
			newNode->next = ptr->next;
			ptr->next = newNode;
            break;
        }
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
 
    insertAfter(head, 20, 25);
    
    printf("\n New list will be:\n");
    traversal(head);
    return 0;
}
