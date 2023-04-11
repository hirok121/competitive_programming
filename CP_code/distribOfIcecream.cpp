#include<bits/stdc++.h>

using namespace std;

 void solve(){
  unsigned long long int n ,previce;
    cin>>n>>previce;

  int detress=0;

   for (int  i = 0; i < n; i++)
   {
    char ch; 
   unsigned long long int d;

    cin>>ch>>d;

    if (ch=='+')
    {
        previce+=d;
    }else{

        if(previce>d)
            previce-=d;
        else
              detress++;

    }

   }
   
    cout<<previce<<" "<<detress<<endl;

 }

int main(){

        // solve();
        char str[1000];
        gets(str);
        cout<<strlen(str);


    return 0;

}