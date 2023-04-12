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
    double n,m,a; cin>>n>>m>>a;
    unsigned long long int ans=ceil(n/a)*ceil(m/a);
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