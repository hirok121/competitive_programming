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

void solve(int *a )
{
    for (int i = 0; i < sizeof(a)/sizeof(int); i++) //sizeof(a) will return 4
    {
        a[i]=i*10;
    }
    
}

int main()
{

    int a[]={1,2,3,4};

    int t = 1;
    // cin>>t;
    while (t--)
        solve(a);

    for (int i = 0; i <sizeof(a)/sizeof(int) ; i++)
    {
        printf("%d  ",a[i]);
    }
    

    return 0;
}