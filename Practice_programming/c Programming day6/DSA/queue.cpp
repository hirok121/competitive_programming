#include<iostream>

using namespace std;


class queuebyarry{
    private:
    int top;
    int*arr;
    int tail;

    public:
 queuebyarry(){
    arr=new int[100];
    top=-1;
    tail=-1;
 }

 void push(int val){
if (top==-1)
{
    top++;
}
    arr[++tail]=val;
 }

 void pop(){
    if (top==-1|| top > tail)
    {
        return;
    }
    
    top++;

 }

 int peekvalue(){

    if (top==-1 || top>tail)
    {
        return -1;
    }

    return arr[top];
 }

 bool isempty(){

    return top==-1 || top >tail;
 }

};

void printque(queuebyarry que){

    while (!que.isempty()  )
    {
        cout<<que.peekvalue()<<" ";
        que.pop();
    }

    cout<<endl;
    
}

int main(){

    queuebyarry que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);
    que.push(6);

    printque(que);

    que.pop();

    printque(que);

    que.push(7);
 printque(que);

    return 0;
}