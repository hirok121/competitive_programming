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
    int n; cin>>n;
    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }


    for (int i = n-1; i >0; i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[0]<<endl;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}