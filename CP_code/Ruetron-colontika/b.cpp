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
    string s; cin >> s;
    string ans;
    int l=s.size();
    if (l>10){
        ans=s[0]+to_string(l-2)+s[l-1];
        cout<<ans<<endl;
    }else
        cout<<s<<endl;
}

int main()
{
    int t = 1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}