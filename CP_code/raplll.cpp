#include "bits/stdc++.h"
using namespace std;

long long lcm(long long a, long long b)
{
  return a*b/__gcd(a,b);
}

int main(){

long long int a,b,c,d,p,q,r,x,y,z;
cin>>a>>b>>c>>d;
p=(a-1)/c;
q=b/c;
p=q-p;

r=(a-1)/d;
x=b/d;
r=x-r;

y=(a-1)/lcm(c,d);
z=b/lcm(c,d);
y=z-y;

cout<<(b-a+1)-(b/c-(a-1)/c)-(b/d-(a-1)/d)+(b/lcm(c,d)-(a-1)/lcm(c,d))<<endl;
cout<<b-a+1-(p+r-y);

return 0;

}