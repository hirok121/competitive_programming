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
    int m,f,r,sum;
    cin>>m>>f>>r;

    if(m==-1 && f==-1 && r==-1)
        exit(0);

    if(m==-1 || f==-1){
        cout<<"F"<<endl;
        return;
    }

    sum=m+f;
    switch (sum)
    {
    case 80 ... 100:
        cout<<"A"<<endl;
        break;
    case 65 ... 79:
        cout<<"B"<<endl;
        break;
    case 50 ... 64:
        cout<<"C"<<endl;
        break;
    case 30 ... 49:
        if(r<50)
            cout<<"D"<<endl;
        else
            cout<<"C"<<endl;
        break;
    case 0 ... 29:
        cout<<"F"<<endl;
        break;
    
    default:
        break;
    }
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t)
        solve();

    return 0;
}