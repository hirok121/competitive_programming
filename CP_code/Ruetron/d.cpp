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
    vi a;
    int t;
    cin>>t;
    a.push_back(t);
    cin>>t;
    a.push_back(t);
    cin>>t;
    a.push_back(t);

    sort(a.begin(),a.end());

    cout<<a[0]<<" "<<a[1]<<" "<<a[2];
    cout<<endl;


}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}