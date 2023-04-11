#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertstart(node *&headptr, int val)
{
    node *newnode = new node(val);
    newnode->next = headptr;
    headptr = newnode;
}

// call by pointer of pointer

void insertlast(node **headptr, int val)
{

    node *ptr;
    node *newnode = new node(val);
    if (*headptr == NULL)
    {
        *headptr = newnode;
        return;
    }
    ptr = *headptr;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
}

// call by referance

void insertlastreferance(node *&headptr, int val)
{

    node *ptr;
    node *newnode = new node(val);
    if (headptr == NULL)
    {
        headptr = newnode;
        return;
    }
    ptr = headptr;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
}

// insert in certain position

void insertincertainpos(node *&head, int pos, int val)
{

    node *prev, *temp;
    temp = head;
    if (pos == 1)
    {
        insertstart(head, val);
    }
    else
    {
        node *newnode = new node(val);
        while (pos != 1)
        {
            prev = temp;
            temp = temp->next;
            pos--;
            if (temp == NULL)
            {
                if (pos == 1)
                {
                    prev->next = newnode;
                }

                return;
            }
        }
        newnode->next = temp;
        prev->next = newnode;
    }
}

// delete in certain position

void deleteincertainpos(node *&head, int pos)
{
    node *prev, *temp;
    temp = head;
    if (pos == 1)
    {
        // insertstart(head, val);

        head = head->next;
        free(temp);
    }
    else
    {

        while (pos != 1)
        {
            prev = temp;
            temp = temp->next;
            pos--;
            if (temp == NULL)
            {
                return;
            }
        }

        prev->next = temp->next;
        free(temp);
    }
}

// dellete an element by value

void deletion(node *head, int val)
{
    node *ptr = head;

    while (ptr->next->data != val)
    {
        ptr = ptr->next;
    }

    node *temptodelete = ptr->next;

    ptr->next = ptr->next->next;

    delete temptodelete;

    // free(temptodelete);

    // cout<<temptodelete->data<<endl;
}

// reverse linklist itretive method

void reverse(node *&head)
{
    node *prev, *current, *next;
    prev = NULL;
    current = head;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }

    head = prev;
}

// recursive reverse of linklist

node *recursivereverse(node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = recursivereverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

// recursive reverse k nodes

node *reverseknodes(node *&head, int k)
{

    node *prev, *current, *nextptr;
    prev = NULL;
    current = head;

    int count = 0;
    while (current != NULL && count < k)
    {
        nextptr = current->next;
        current->next = prev;

        prev = current;
        current = nextptr;
        count++;
    }

    if (nextptr != NULL)
    {
        head->next = reverseknodes(nextptr, k);
    }

    return prev;
}

// reverse tow nodes continusly

node *reverse2nodes(node *&head)
{

    // store link
    node *newhead = NULL, *nextptr, *nextparameter;
    nextptr = head->next;
    nextparameter = nextptr->next;

    // update link
    nextptr->next = head;

    // head->next=newhead;
    newhead = head->next;

    if (nextparameter != NULL || nextptr->next != NULL)
    {
        head->next = reverse2nodes(nextparameter);
    }
    else
    {
        head->next = nextptr;
    }

    // node * newhead=head->next;
    // temp->next=temp2->next;

    // temp=newhead->next;
    // newhead->next=head;

    return newhead;
}

node *mergelinklist(node *head1, node *head2)
{

    node *head = NULL, *current;

    if (head1 == NULL)
    {
        return head2;
    }
    else if (head2 == NULL)
    {
        return head1;
    }

    if (head1->data <= head2->data)
    {
        head = head1;
        head1 = head1->next;
    }
    else
    {
        head = head2;
        head2 = head2->next;
    }

    current = head;

    while (head1 && head2)
    {
        if (head1->data <= head2->data)
        {
            current->next = head1;
            head1 = head1->next;
        }
        else
        {
            current->next = head2;
            head2 = head2->next;
        }
        current = current->next;
    }

    if (head1)
    {
        current->next = head1;
    }
    else
    {
        current->next = head2;
    }

    return head;
}

// merge linklist recursive function

node *recursivemerge(node *head1, node *head2)
{

    node *head = NULL, *current;

    if (head1 == NULL)
    {
        return head2;
    }
    else if (head2 == NULL)
    {
        return head1;
    }

    if (head1->data <= head2->data)
    {
        current = head1;
        current->next = recursivemerge(head1->next, head2);
    }
    else
    {
        current = head2;
        current->next = recursivemerge(head1, head2->next);
    }

    return current;
}

// delete a node by pointer

void deleteanode(node *ptr)
{

    node *temp;
    temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);
}

// delete duplicate value of linklist

void deleteduplicate(node *head)
{

    if (head==NULL|| head->next == NULL)
    {
        return;
    }

    if (head->data == head->next->data)
    {
        deleteanode(head);
        deleteduplicate(head);
    }
    else
    {
        deleteduplicate(head->next);
    }
}

//getlenth 

int getlent(node* head){

    int lenth=0;
    node* temp=head;

     while (temp!=NULL) {
   lenth++;
   temp=temp->next;
   }

   return lenth;
}

// get value  by pos from tail  .. tail=0;

int getvalue(node* head,int positionFromTail){


    node* temp;
    temp=head;
   int lenth=0,ans,conuter=1;

   lenth=getlent(head);
   
   
  int  posfromstart=lenth-positionFromTail;
  
  while (temp!=NULL && conuter < posfromstart   ) {
  temp=temp->next;
  conuter++;
  }
  
  ans=temp->data;
    
 return ans;
}


void printlinklist(node *head)
{
    if (head == NULL)
    {
        cout << "head is NULL " << endl;
        return;
    }

    node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL \n");
}

int main()
{

    node *head = NULL;
    node *head2 = NULL;

    // call by referance head
    insertlastreferance(head, 1);
    insertlastreferance(head, 2);
    // insertlastreferance(head, 3);
    // insertlastreferance(head, 4);
    insertlastreferance(head, 5);
    //  insertlastreferance(head, 6);
    insertlastreferance(head, 7);
    insertlastreferance(head, 8);

    // head 2
    insertlastreferance(head2, 1);
    // insertlastreferance(head, 2);
    insertlastreferance(head2, 3);
    insertlastreferance(head2, 3);
    insertlastreferance(head2, 3);
    insertlastreferance(head2, 3);
    insertlastreferance(head2, 3);
    insertlastreferance(head2, 4);
    insertlastreferance(head2, 6);

    // printlinklist(head);
    printlinklist(head2);

    // reverse(head);

    // deleteincertainpos(head,10);

    // deletion(head, 3);

    // insertincertainpos(head,5,0);
    // head=recursivereverse(head);

    // head=reverseknodes(head,3);

    // head = reverse2nodes(head);

    node *newhead = NULL;
    // newhead= mergelinklist(head, head2);
    // newhead = recursivemerge(head, head2);
    //deleteduplicate(head2);

   // printlinklist(head2);

   // printlinklist(newhead);
      cout<< getlent(head2)<<endl;


   cout<< getvalue(head2,1)<<endl;

    return 0;
}