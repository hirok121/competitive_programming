#include <bits/stdc++.h>

using namespace std;

void insertat_bottom(stack<int> &mystack, int x)
{
    if (mystack.empty())
    {
        mystack.push(x);
        return;
    }

    int top = mystack.top();
    mystack.pop();
    insertat_bottom(mystack, x);
    mystack.push(top);
}

void reversestack(stack<int> &mystack)
{

    if (mystack.empty())
    {
        return;
    }

    int top = mystack.top();
    mystack.pop();
    reversestack(mystack);

    insertat_bottom(mystack, top);
}

void printstack(stack<int> st)
{

    while (!st.empty())
    {
        cout << st.top() << "  ";
        st.pop();
    }
    cout << endl;
}

void insertsorted(stack<int> &st, int x)
{

    if (st.empty() || x > st.top())
    {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();
    insertsorted(st, x);

    st.push(temp);
}
 //static int cunt=0;

void deletemiddle(stack<int>& st){

  static int sizeofstack=st.size();
    static int cunt=0;

    if (cunt==sizeofstack/2)
    {
        st.pop();
        return;
    }
    cunt++;

    int temp=st.top();
    st.pop();
    deletemiddle(st);
    st.push(temp);
    
}

void sortstack(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int temp = st.top();
    st.pop();
    sortstack(st);
    insertsorted(st, temp);
}

//stack<int> 
void sortstackusingstack(stack<int>& st){
stack<int > tempst;

while (!st.empty())
{

int temp=st.top();
st.pop();

while (!tempst.empty() && temp<tempst.top() )
{
    st.push(tempst.top());
    tempst.pop(); 
}

tempst.push(temp);

}
//st.push(0000);
st=tempst;
//return tempst;

}



int main()
{

    stack<int> mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);
    mystack.push(2);

    // printstack(mystack);

    // reversestack(mystack);

    // printstack(mystack);

    // insertat_bottom(mystack, 0);

    // printstack(mystack);

    // sortstack(mystack);

    //deletemiddle(mystack);

   //stack<int>mystack1=
    sortstackusingstack(mystack);

     printstack(mystack);

   

    return 0;
}