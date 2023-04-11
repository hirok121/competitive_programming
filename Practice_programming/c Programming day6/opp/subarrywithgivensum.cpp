#include<iostream>
using namespace std;

void subarrywithgivensum(int arry[],int n, int sum);

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
subarrywithgivensum(arry,n,12);



}

void subarrywithgivensum(int arry[],int n, int sum){


    int e,s,sum1=0;
   for (  s =0 ; s < n; s++)
   {
    sum1=0;
    for ( e =s ; e < n; e++)    {
        
        sum1+=arry[e];

        if (sum1==sum )
        {
           cout<<"start "<<s<<" end "<<e;
           return;
        }
    }
   }

   cout<<"END";

}