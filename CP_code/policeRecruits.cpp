#include<iostream>

using namespace std;

int main(){


    int a;

    cin>>a;

    int arr[a];

    for (int  i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    
    int untreated=0;
    int freepolice=0;

    for (int  i = 0; i < a; i++)
    {
        if (arr[i]==-1 && freepolice==0)
        {
            untreated++;
        }else if (arr[i]==-1 && freepolice!=0)
        {
            freepolice--;
        }else{
            freepolice+=arr[i];
        }
        
        
    }
    
    cout<<untreated;

    return 0;
}