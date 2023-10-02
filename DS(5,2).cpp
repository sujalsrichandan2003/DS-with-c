//2
#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};
void traverse(struct Node* head) {
    struct Node* ptr = head;

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

 
struct Node* search(struct Node* head, int ele) {
    struct Node* ptr = head;
 
    while (ptr != NULL) {
        if (ptr->data == ele) {
            return ptr;
        }
        ptr = ptr->next;
    }
 
    return NULL;
}

int main() { 
    struct Node* head = NULL;
 
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 30;

    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 20;

    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    fourth->data = 40;

    struct Node* fifth = (struct Node*)malloc(sizeof(struct Node));
    fifth->data = 50;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
 
    printf("Original List: ");
    traverse(head);
 
    struct Node* targetele = search(head, 30);
 
    if (targetele != NULL) {
        printf("The target node with the value 30 is found at address %d\n", targetele);
    } else {
        printf("The target node with the value 30 is not found in the list.\n");
    }

    return 0;
}

