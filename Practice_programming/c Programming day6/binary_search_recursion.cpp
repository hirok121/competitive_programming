#include<iostream>
using namespace std;

int recursive_binary_seach(int *arry,int key,int s,int e);

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

cout<<"\n arry\n------------------------------------------\n";
for (int i = 0; i < n; i++)
{
   cout<<arry[i]<<" ";
}
cout<<"\nansewr \n------------------------------------------\n";
//calling function


  cout<<recursive_binary_seach(arry,9,0,4);

 return 0;

}

int recursive_binary_seach(int *arry,int key,int s,int e){

    if (s>e)
    {
            return -1;
    }
    

    int mid=(s+e)/2;
    int ans;

   if (key==arry[mid])
   {
    return arry[mid];
   }
      if (key<arry[mid])
   {
   return recursive_binary_seach(arry,key,s,mid-1);
   }
   else if (key>arry[mid])
   {
    return  recursive_binary_seach(arry,key,mid+1,e);
   }  

}