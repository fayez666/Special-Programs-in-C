#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};

struct node* del_first(struct node *head){
    if (head == NULL)
    {
        printf("Linked List is Empty");
        return head;
    }
    struct node *ptr = NULL;
    ptr = head;
    head = head->link;
    free(ptr);
    return head;
}
int main(){
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    struct node *ptr =NULL;
    ptr = malloc(sizeof(struct node));
    head = del_first(head);
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
  return 0;

}