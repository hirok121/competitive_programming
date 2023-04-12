#include <stdio.h>
#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mii map<int, int>
#define pqi priority_queue<int, vector<int>>
#define pqig priority_queue<int, vector<int>, greater<int>>
#define pb push_back
#define vpii vector<pii>

using namespace std;

void solve()
{
    unsigned long long  int n,ans=0; cin>>n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i==0)
            continue;
        if(a[i] < a[i-1]){
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }

    cout<<ans<<endl;
    
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}