#include<iostream>
using namespace std;

void bubblesort(int arry[],int n);

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
cout<<"sorted arry\n------------------------------------------\n";
//calling function
bubblesort(arry,n);
for (int i = 0; i < n; i++)
{
   cout<<arry[i]<<" ";
}


}

void bubblesort(int arry[],int n){

    int counter=1;

    while ( counter<n-1 )
    {
       for (int i = 0; i < n-counter; i++)
       {
        if (arry[i]>arry[i+1])
        {
            int temp=arry[i];
            arry[i]=arry[i+1];
            arry[i+1]=temp;
        }
       }
       counter++;
    }

}