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
    string s; 
    getline(cin,s);
    int i=0;
    while (s[i])
    {
        if ( 'A' <= s[i] && s[i] <= 'Z')
            s[i]+=32;
        else if ( 'a' <= s[i] && s[i] <= 'z')
            s[i]-=32;
        i++;
    }

    cout<<s<<endl;
    
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}