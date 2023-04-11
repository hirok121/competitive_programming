#include<iostream>
#include<stack>
#include<bits/stdc++.h>

using namespace std;

int primearr[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};

class queuebyarry{
    private:
    int top;
    int*arr;

    public:
 queuebyarry(){
    arr=new int[100];
    top=-1;
 }

 void push(int val){
    arr[++top]=val;
 }

 void pop(){
    if (top==-1)
    {
        return;
    }
    
    top--;

 }

 int peekvalue(){

    if (top==-1)
    {
        return -1;
    }

    return arr[top];
 }

 bool isempty(){

    return top==-1;
 }

};

void functionmy(vector<int > num,int q,vector<int>& ans){

    stack<int > stack1,temp,temp2;

    for (int i = 0 ; i<num.size(); i++)
    {
        stack1.push(num[i]);
        
    }
    


   for (int  i = 0; i < q; i++)
   {
    if (stack1.empty())
    {
        break;
    }
    
    int prime=primearr[i];
    while (!stack1.empty())
    {
        int ele=stack1.top();
        stack1.pop();

        if ( ele%prime==0 )
        {
          temp.push(ele);  
        }else{
            temp2.push(ele);
        } 
        
    }

    while (!temp.empty() )
    {
        int ele=temp.top();
        temp.pop();
        ans.push_back(ele);
        
    }

    stack1=temp2;

     while (!temp2.empty() )
    {
        temp2.pop();
        
    }
    

   }

   while (!stack1.empty())
   {
    int ele=stack1.top();
        stack1.pop();
        ans.push_back(ele);
    	
   }

}

int main(){


stack<int> stack1,stack2,stack3;


vector<int> num,ans;
//3 4 7 6 5
//3 3 4 4 9



num.push_back(3);
num.push_back(3);
num.push_back(4);
num.push_back(4);
num.push_back(9);
num.push_back(5);

functionmy(num,2,ans);

for (int  i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<"  ";
}


    return 0;
}
