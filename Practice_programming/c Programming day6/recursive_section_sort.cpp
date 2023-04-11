#include<iostream>
using namespace std;

void recursive_binary_seach(int *arry,int start,int n);

void sawp(int* a,int *b){

    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

int n;
cout<<"input the lenth of arry  \n";
cin>>n;
int arry[n];

for (int i = 0; i < n; i++)
{
   cin>>arry[i];
}

cout<<"unsorted arry\n------------------------------------------\n";
for (int i = 0; i < n; i++)
{
   cout<<arry[i]<<" ";
}
cout<<"\nsorted arry\n------------------------------------------\n";
//calling function
recursive_binary_seach(arry,0,n);
for (int i = 0; i < n; i++)
{
   cout<<arry[i]<<" ";
}


}

void recursive_binary_seach(int *arry,int start,int n){

   if (n==1)
   {
    return;
   }
     
     int minidx=0;
    

       for (int i=1;i<n; i++)
       {
        if (arry[minidx]>arry[i])
        {
           minidx=i;
        }
       }
     
     sawp(&arry[0],&arry[minidx]);
    

    recursive_binary_seach(arry+1,start,n-1);

}