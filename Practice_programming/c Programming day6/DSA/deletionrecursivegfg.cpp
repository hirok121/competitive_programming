// C++ program to delete a node in
// singly linked list recursively

#include <bits/stdc++.h>
using namespace std;

struct node {
 int info;
 node* link = NULL;
 node() {}
 node(int a)
  : info(a)
 {
 }
};

// Deletes the node containing 'info'
// part as val and alter the head of
// the linked list (recursive method)
void deleteNode(node*& head, int val)
{

 if (head == NULL) {
  cout << "Element not present in the list\n";
  return;
 }

 if (head->info == val) {
  node* t = head;

  head = head->link;
  delete (t);
  return;
 }
 
 deleteNode(head->link, val);
}

// Utility function to add a
// node in the linked list
// Here we are passing head by
// reference thus no need to
// return it to the main function
void push(node*& head, int data)
{
 node* newNode = new node(data);
 newNode->link = head;
 head = newNode;
}

// Utility function to print
// the linked list (recursive
// method)
void print(node* head)
{

 // cout<<endl gets implicitly
 // typecasted to bool value
 // 'true'
 if (head == NULL and cout << endl)
  return;
 cout << head->info << ' ';
 print(head->link);
}

int main()
{

 // Starting with an empty linked list
 node* head = NULL;

 // Adds new element at the
 // beginning of the list
 push(head, 10);
 push(head, 12);
 push(head, 14);
 push(head, 15);

 // original list
 print(head);

 printf("\n%u\n ", head);

 // Call to delete function
 deleteNode(head, 20);

 // 20 is not present thus no change
 // in the list
 print(head);

 printf("\n%u\n ", head);

 deleteNode(head, 10);
 print(head);
 printf("\n%u\n ", head);

 deleteNode(head, 14);
 print(head);
 printf("\n%u\n ", head);

 return 0;
}
