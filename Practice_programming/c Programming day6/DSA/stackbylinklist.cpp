#include <iostream>

using namespace std;

class node
{
private:
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertatfirst(node *&head, int val)
{

    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;

        return;
    }

    newnode->next = head;
    head = newnode;
}

void deletenode(node *&head)
{

    node *todelete = head;
    head = head->next;
    delete todelete;
}

class stack
{
private:
public:
    node *stacknode = NULL;

    void push(int val)
    {
        insertatfirst(stacknode, val);
    }

    void pop()
    {
        if (stacknode!=NULL)
        {
            deletenode(stacknode);
        }else{
            cout << "stack is empty "<<endl;
        }
        
       
    }

    int topvalue()
    {
        return stacknode->data;
    }

    bool isempty()
    {
        if (stacknode == NULL)
        {
            return true;
        }

        return false;
    }
};

void printstack(stack st)
{
    node *ptr = st.stacknode;

    while (ptr)
    {
        cout << ptr->data << "  ";
        ptr = ptr->next;
    }
    cout << endl;
}

void copystack(stack st, stack &copy)
{

    if (st.isempty())
    {
        return;
    }

    int element = st.topvalue();
    st.pop();
    copy.push(element);

    copystack(st, copy);
}

int main()
{

    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);

    // printstack(st);

    st.pop();
    st.pop();
    st.pop();

    printstack(st);

    stack copy1;

    // copy1.push(1);
    // copy1.push(2);
    // copy1.push(3);
    // copy1.push(4);
    // copy1.push(5);
    // copy1.push(6);
    // copy1.push(7);

    copystack(st, copy1);

    printstack(copy1);

    stack copy2;

    copystack(copy1,copy2);
    printstack(copy2);

    //  copystack(copy2,st);
    //  printstack(st);


   // printstack(copy2);


    // stack copy3;

    // copystack(copy2,copy3);
    // printstack(copy3);

    return 0;
}