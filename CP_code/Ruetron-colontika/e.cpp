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
    int r1,c1,r2,c2;
    cin>>r1>>c1>>c2;
    r2=c1;
    int i,j,k;
    long long int a[r1][c1],b[r2][c2],mult[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin>>b[i][j];
        }
        
    }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j){
            mult[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {   if (j==c2-1)
                cout<<mult[i][j];
            else 
                cout<<mult[i][j]<<" ";
        }
        cout<<endl; 
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