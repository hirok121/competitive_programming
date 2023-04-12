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
    int r,c; cin>>r>>c;
    int rows[r]={0},cols[c+1]={0},arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
            rows[i]+=arr[i][j];
            cols[j]+=arr[i][j];
            cols[c]+=arr[i][j];
        }
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<rows[i]<<endl;
    }

    for (int i = 0; i < c; i++)
    {
        cout<<cols[i]<<" ";
    }

    cout<<cols[c]<<endl;
    
    
    
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}