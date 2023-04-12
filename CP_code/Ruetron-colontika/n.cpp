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

bool isdistint(int x){
    bool ans= false;
    string s=to_string(x);
    int i=0;
    set<char> ss;
    while (s[i])
    {
        ss.insert(s[i++]);
    }

    if(s.size()==ss.size())
        ans=true;
    return ans;
}

void solve()
{
    int x;cin>>x;

    while (1)
    {
        x++;
        if (isdistint(x)){
            cout<<x<<endl;
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