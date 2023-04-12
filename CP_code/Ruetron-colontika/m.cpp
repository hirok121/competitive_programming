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

bool isprime(int x){

    bool ans =true;

    for (int i = 2; i <= sqrt(x) ; i++)
    {
        if((x%i)==0){
            ans=false;
            break;
        }
    }
    return ans;
}

void solve()
{
    long long int n,cunt=0 ; cin >>n;

    for (int i = 0; i < n; i++)
    {   
        int t; cin>>t;
        if (isprime(t))
            cunt++;
    }

    cout<<cunt<<endl;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();

    return 0;
}