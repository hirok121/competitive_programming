#include<bits/stdc++.h>

using namespace std;

void solve(){

    unsigned long long int ans=0;

    int n, m;
    cin>>n>>m;

    vector<int>wb(n,-1);
    vector<int>op(m,-1);

    for (int i = 0; i < n; i++)
    {
        cin>>wb[i];
    }

     for (int i = 0; i < m; i++)
    {
        cin>>op[i];
    }

    if (n<=m)
    {
       for (int i = 0; i < n; i++)
       {
        ans+=op[i];
       }
       cout<<ans<<endl;
       return;
        
    }

    int i;

    for ( i = 0; i < m; i++)//kkkk
    {
         ans+=op[i];
    }
    for ( i=n-1 ; i < n-m; i++)
    {
        ans+=wb[i];
    }


   cout<<ans<<endl;
}

int main (){


    int t;
    cin>>t;

    for (size_t i = 0; i < t; i++)
    {
        solve();
    }
    
}