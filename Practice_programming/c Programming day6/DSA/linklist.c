#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node *link;
};

void insertAtLast(struct node **head, int data)
{
    struct node *ptr, *newnod;
    if (*head == NULL)
    {
        *head = (struct node *)malloc(sizeof(struct node));
        (*head)->a = data;
        (*head)->link = NULL;
        return;
    }

    newnod = (struct node *)malloc(sizeof(struct node));
    newnod->a = data;
    newnod->link = NULL;
    ptr = *head;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = newnod;
}

// insert at begining pass referance

void insertatbegining(struct node **headptrp, int data)
{
    struct node *ptr, *newnod;
    newnod = (struct node *)malloc(sizeof(struct node));
    newnod->a = data;
    newnod->link = (*headptrp);
    (*headptrp) = newnod;
}

void printlinklist(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->a);
        ptr = ptr->link;
    }
    printf("NULL ");
}

int main()
{
    struct node *head = NULL;

    // head = (struct node *)malloc(sizeof(struct node));
    // head->a = 1;
    // head->link = NULL;

    // struct node **headptr=&head;
    printf("%u\n ", head);

    insertAtLast(&head, 1);
    insertAtLast(&head, 2);
    insertAtLast(&head, 3);
    insertAtLast(&head, 4);

    // struct node *newnodptr=NULL;
    insertatbegining(&head, 0);
    //   struct linklist*  newnod = (struct linklist *)malloc(sizeof(struct linklist));
    //     newnod->a = 2;
    //     newnod->link = NULL;
    //     head->link=newnod;

    //     newnod = (struct linklist *)malloc(sizeof(struct linklist));
    //     newnod->a = 3;
    //     newnod->link = NULL;
    //     head->link->link=newnod;

    printlinklist(head);

    printf("\n%u\n ", head);

    return 0;
}