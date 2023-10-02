#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

Node *head = NULL;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertNode(int data, int position)
{
    Node *newNode = createNode(data);

    if (head == NULL || position == 1)
    {
        newNode->next = head;
        head = newNode;
        if (head->next != NULL)
        {
            head->next->prev = newNode;
        }
    }
    else
    {
        Node *temp = head;
        int i = 1;
        while (i < position - 1 && temp != NULL)
        {
            temp = temp->next;
            i++;
        }

        if (temp == NULL)
        {
            printf("Invalid position\n");
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        if (newNode->next != NULL)
        {
            newNode->next->prev = newNode;
        }
    }
}

void displayList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    insertNode(10, 1);
    insertNode(20, 2);
    insertNode(30, 3);
    insertNode(40, 4);

    displayList();

//    return 0;
}
