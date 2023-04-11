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

int  MOD=1e9+7;

void solve()
{
    int n;
    cin>>n;

    unsigned long long int ans=((((n*(n+1))%MOD)*(4*n-1))%MOD*337)%MOD;
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