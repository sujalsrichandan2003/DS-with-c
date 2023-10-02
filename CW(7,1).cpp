#include <stdio.h>
#include <stdlib.h>

struct p
{
    int data;
    struct p *add;
};

struct p *start = NULL, *temp, *new1, *next, *prev;
void creat();
void display();
void insert_frist();
void insert_last();
void main()
{
    int n;
    printf("----------------linked list-------------\n");
    do
    {
        printf("1.craet\n2.dispaly\n3.exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            creat();
            break;
        case 2:
            display();
            break;
        }
    } while (n != 3);
}

void creat()
{
    char ch;
    int n;
    printf("enter a element=");
    scanf("%d", &n);
    start = (struct p *)(malloc(sizeof(struct p)));
    start->data = n;
    start->add = NULL;
    temp = start;

    printf("want to cuntinue (yes or no)\n");
    scanf(" %c", &ch);
    while (ch == 'Y' || ch == 'y')
    {
        printf("entre a next elment =");
        scanf("%d", &n);
        new1 = (struct p *)(malloc(sizeof(struct p)));
        new1->data = n;
        new1->add = NULL;
        temp->add = new1;
        temp = temp->add;
        printf("want to cuntinue 1 (yes or no)\n");
        scanf("%c", &ch);
        scanf(" %c", &ch);
         ch=getche();
         printf("\n");
    }
}

void display()
{
    int count = 0;
    if (start == NULL)
    {
        printf("list ist not found");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            if (temp->data != 0) {
      count++;}
            temp = temp->add;
        }

        printf("The number of non-zero elements in the linked list is: %d\n", count);

    }
}
