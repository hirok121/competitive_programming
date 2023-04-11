#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int leftt=200,top=200,radx=30,rady=15;

void solve(){

    int temp;

   
   POINT lap,proj;

    int w,d,h;
    int a,b,f,g;
    cin>>w>>d>>h>>a>>b>>f>>g;

      lap.x=a;
      lap.y=b;
      proj.x=f;
      proj.y=g;

     int ans=h,ans2=h;


      

    ans+= g==min(g,(d-g)) ? temp=0 : temp=d ;
    ans+=min(b,abs(temp-b));
    ans+=abs(a-f);

    ans2+= a==min(a,(w-a))  ? temp=0 : temp=w ;;
    ans2+=min(f,abs(w-f));
    ans2+=abs(g-b);


   cout<<"ans :"<<min(ans,ans2)<<endl;
}

int main (){


    
}