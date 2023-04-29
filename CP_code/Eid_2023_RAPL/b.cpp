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
    int a[]={100,50,10,5,2,1};
    int i=0, n; cin>>n;
    int ans=0;

    while (n)
    {
        ans+=n/a[i];
        n=n%a[i++];
    }

    cout<<ans<<endl;
    
}

int main()
{
    int t = 1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}