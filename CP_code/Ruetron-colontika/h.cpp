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
    vi a(n,1);
    for (int i = 0; i < n-1; i++)
    {   int t;
        cin>>t;
        a[t-1]=0;
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    
    
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}