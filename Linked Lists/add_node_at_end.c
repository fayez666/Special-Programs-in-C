#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head)
{
    if(head == NULL)
        printf("Linked List is Empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->link;

    }
}

void add_at_end(struct node *head, int data )
{
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while(ptr->link !=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));

    head->data = 45;
    head->link =NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data =98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current ->data =3;
    current ->link = NULL;

    head->link->link = current;


    add_at_end(head,55);
    print_data(head);

    return 0;
}
