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
    int w,h,x,y,r;
    cin>>w>>h>>x>>y>>r;
    if(y-r>=0 && y+r<=h && x-r>=0 && x+r<=w)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}