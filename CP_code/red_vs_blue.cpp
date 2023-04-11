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
    int n,r,b; cin>>n>>r>>b;
    int ns=b+1;
    int t=r/ns;
    int tt=r%ns;
    string rr="";
    string f="";
for (size_t i = 0; i < t+1; i++)
{
    rr+='R';
}

for (size_t i = 0; i < tt; i++)
{
    f+=rr+'B';
}
rr=rr.substr(0,t);
for (size_t i = 0; i < ns-tt-1; i++)
{
     f+=rr+'B';
}
f+=rr;

cout<<f<<endl;

// int R=0,B=0;
// for (int  i = 0; i < f.size(); i++)
// {
//     if(f[i]=='R') R++;
//     else B++;
// }

// cout<<R<<"  "<<B<<endl;

}

int main()
{
    int t = 1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}