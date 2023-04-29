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

int func(int a){
    int sum=0;

    while (a)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}

void solve()
{
    int a; cin>>a;
    int sa=func(a);
    if(a%sa)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}

int main()
{
    cout<<"Hello World!"<<endl;

    return 0;
}