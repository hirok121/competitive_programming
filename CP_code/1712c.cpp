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

int x_sum(vvi a,int n,int m,int i,int j){

        int now = 0;
        int ci = i, cj = j;
        while(ci >= 0 && ci < n && cj >= 0 && cj < m)
        {
            now+=a[ci][cj];
            ci--;
            cj--;
        }
        ci = i, cj = j;
        while(ci >= 0 && ci < n && cj >= 0 && cj < m)
        {
            now+=a[ci][cj];
            ci++;
            cj--;
        }
        ci = i, cj = j;
        while(ci >= 0 && ci < n && cj >= 0 && cj < m)
        {
            now+=a[ci][cj];
            ci--;
            cj++;
        }
        ci = i, cj = j;
        while(ci >= 0 && ci < n && cj >= 0 && cj < m)
        {
            now+=a[ci][cj];
            ci++;
            cj++;
        }
        now-=a[i][j]*3;
    return now;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vvi gride(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>gride[i][j];
        }
        
    }

    int mx=INT_MIN;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           mx=max(mx,x_sum(gride,n,m,i,j));
        //    cout<<gride[i][j]<<" ";
        }
        // cout<<endl;   
    }

    cout<<mx<<endl;
    
}

int main()
{
    int t = 1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}