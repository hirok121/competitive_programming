#include<bits/stdc++.h>

using namespace std;



void solve(){

int n,max=INT_MIN,min=INT_MAX;
int maxi,mini;

cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr[i]=x;

        if ( max<x )
        {
           max=x; 
           maxi=i;
        }

        if(min>x) {
            min=x;
            mini=i;
        }
        
    }

    if(abs(maxi-mini)==1) {
         cout<<max-min<<endl;
         return;
    }

    if((max-arr[0])> (arr[n-1]-min))
     cout<<max-arr[0]<<endl;
     else
        cout<<arr[n-1]-min<<endl;
    
}

int main (){
int t=1;
 cin>>t;
    while (t--)
    {
        solve();
    }

    
}