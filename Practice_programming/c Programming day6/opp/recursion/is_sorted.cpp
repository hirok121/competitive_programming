#include<iostream>
using namespace std;

bool is_sorted(int * arr,int n){

    if (n==1)
    {
        return true;
    }

    bool res=is_sorted(arr+1,n-1);
    
    return res && arr[0]<arr[1];

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

if (is_sorted(arry,n) )
{
    cout<<" yes";
}else{
    cout<<"no";
}



}
