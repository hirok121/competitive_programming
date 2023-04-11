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
    int n, m=INT32_MAX,mm=INT32_MIN;
        cin>>n;
    long long int sum=0;

    for (int  i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        sum+=t;
        m=min(m,t);
        mm=max(mm,t);

    }

    cout<<m<<" "<<mm<<" "<<sum<<endl;
    
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}