#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,ans=0;
    cin>>n;
    priority_queue<int,vector<int>> qu;
    for (int i = 0; i < n; i++)
    {
         int t; cin>>t;
        if (t>2)
        {
            ans++;
            continue;
        }
        
        qu.push(t);
    }

    while (qu.size()>1)
    {
        int t,tt;
        t=qu.top();
        qu.pop();
        tt=qu.top();
        qu.pop();

        t--;tt--;
        if(t) qu.push(t);
        if(tt) qu.push(tt);
        ans++;
    }

    if(qu.size()) ans++;
    
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--)
    solve();
}