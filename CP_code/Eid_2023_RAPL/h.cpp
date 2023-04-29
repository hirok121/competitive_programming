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

double dis(int a,int b,int x,int y){
    double ans;

    ans=abs(a-x)*abs(a-x) + abs(b-y)*abs(b-y);
    return ans;
}

double disss(int a,int b,int x,int y){
    double ans;

    ans=abs(a-x)*abs(a-x) + abs(b-y)*abs(b-y);
    ans=sqrt(ans);
    return ans;
}

void solve(int t)
{
    int ox,oy,ax,ay,bx,by;
    cin>>ox>>oy>>ax>>ay>>bx>>by;

    double result=acos((dis(ox,oy,bx,by)+dis(ox,oy,ax,ay)-dis(ax,ay,bx,by))/(2*disss(ox,oy,bx,by)*disss(ox,oy,ax,ay)));
    // result=result * 180 / 3.141592;

    // cout<<result<<endl;

    double ans=disss(ox,oy,bx,by)*result;

    cout << setprecision(12);
    cout<<"Case "<<t<<": "<<ans<<endl;

}

int main()
{
    int t = 1,n;
    cin>>n;
    while (t<=n){
        solve(t);
        t++;
        }

    return 0;
}