#include <stdio.h>
#include <bits/stdc++.h>
#include<cmath>

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
    int A,h,n;
    cin>>A>>h>>n;

    vector<int> a(n,0);
    vi b(n,0);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int  i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    int  i=0;
    do{
        int numberOfFight=(ceil(float(b[i])/A));

        if(ceil(float(h)/a[i])<numberOfFight) break;

        int temp=numberOfFight*a[i];
        h-=temp;
        i++;
    }while(h>0);
    
    if (i==n)
    {   
        // cout<<"Health ->"<<h<<endl;
        cout<<"YES\n";
    }else{
        //  cout<<"Health ->"<<h<<endl;
        cout<<"NO\n";
    }

}

int main()
{
    int t = 1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}