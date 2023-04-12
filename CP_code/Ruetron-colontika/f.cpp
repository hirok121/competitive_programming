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
    while (1)
    {
    
    
    int n,x,cnt=0;cin>>n>>x;

    if(!x && !n)
        break;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            for (int k = j+1; k <= n; k++)
            {
                if(i+j+k==x){
                    cnt++;
                }
            }
            
        }
        
    }

    cout<<cnt<<endl;

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