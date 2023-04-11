#include<bits/stdc++.h>

using namespace std;

void solve(){
    int t1,t2,t3,t4;
    int Amood=0,Bmood=0,ans=0;
    cin>>t1>>t2>>t3>>t4;

    // Amood=t1;
    // Bmood=t1;
    // ans=t1;

    Amood=Bmood=ans=t1;

    //for type two

    while (  (Amood || t2)  && (Bmood || t3) && (t2 || t3))
    {

        //type 2
        if (  (Bmood && t2)  )
        {
            int mint2=min(Bmood,t2);
            Amood+=mint2;
            Bmood-=mint2;
            t2-=mint2;
            ans+=mint2;
        }
        //type 3
        if (  Amood && t3)
        {
            int mint3=min(Amood,t3);
            Amood-=mint3;
            Bmood+=mint3;
            t3-=mint3;
            ans+=mint3;
        }
      //  cout<<"\ntype 2 && type 3 \n";
    }
    


    //for type 4
    if (Amood>=0 && Bmood >=00 && t4)
    {
       int temp=min(Amood,min(Bmood,t4)); 
        ans+=temp+1;
    }
    // cout<<"ans";
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--)
    solve();
}