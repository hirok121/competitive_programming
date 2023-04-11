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
    int r,c;
    cin>>r>>c;
    if(!r && !c)
        exit(0);
    
    bool flag=true,flag2=true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(flag)
                cout<<"#";
            else
                cout<<".";
            
            flag=!flag;
        }
        cout<<endl;

        if (flag2)
            flag=false;
        else
           flag=true;

        flag2=!flag2; 
        
        
    }
    
    cout<<endl;
    
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t)
        solve();

    return 0;
}