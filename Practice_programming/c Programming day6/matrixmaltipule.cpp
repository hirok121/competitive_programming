#include<iostream>
using namespace std;

void bubblesort(int arry[],int n);

int main(){

int n;
cout<<"input the lenth of arry  ";
cin>>n>>m;
int arry[n];

for (int i = 0; i < n; i++)
{
   cin>>arry[i];
}

//calling function
bubblesort(arry,n);



}

void bubblesort(int arry[],int n){

   for (int  i =0 ; i < n; i++)
   {
    for (int j = i; j < n; j++)    {
        int s=i,e=j;
       while (s<=e)
       {
        printf("%d",arry[s]);
        s++;
       }
       printf("\n");
    }
   }

}