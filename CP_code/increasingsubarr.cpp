#include<bits/stdc++.h>

using namespace std;

 void solve(){

    int n ; cin>>n;

    vector<int>arr(n);

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    int ans=1;

    int curr=1;

    for (int  i = 0; i < n-1; i++)
    {
        if ( arr[i]<arr[i+1])
        {
            curr++;
        }else
            curr=1;

            ans=max(ans,curr);
        
    }
    
    cout<<ans<<endl;

 }

int main(){

    solve();

    return 0;

}