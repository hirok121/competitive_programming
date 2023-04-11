
        //missing smallest positive number in arry

#include<iostream>
using namespace std;

void bubblesort(int arry[],int n);

int main(){

int n;
cout<<"input the lenth of arry  ";
cin>>n;
int arry[n];

for (int i = 0; i < n; i++)
{
   cin>>arry[i];
}

//calling function
bubblesort(arry,n);



}

void bubblesort(int arry[],int n){

    int i;
   for (  i =0 ; i < 100; i++)
   {
    int flag=1;
    for (int j = 0; j < n; j++)    {

        if (arry[j]==i)
        {
           flag=0;
           break;
        }
    }
    if (flag==1)
    {
       break;
    }
    
   }

   cout<<"smallest positive missing number is "<<i;


}