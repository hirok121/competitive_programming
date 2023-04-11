#include<stdio.h>
#include<bits/stdc++.h>

    using namespace std;

    int n,q,t;


    vector<int> pen_count(100000,1);
    vector<int>pen(100000);
    vector<int>score(100000); 

    void q1(){  

        int a,b;

        cin>>a>>b;

        if(score[a]>score[b]){
            score[a]+=score[b];
            score[b]=0;
            pen[b]=a;
            pen_count[a]+=pen_count[b];
            pen_count[b]=0;
        }else{
           score[b]+=score[a];
            score[a]=0;
            pen[a]=b; 
            pen_count[b]+=pen_count[a];
            pen_count[a]=0;
        }


    }

     void q2(){
        int a;
        cin>>a;
        cout<<pen_count[a]<<endl;
    }

     void q3(){
        int a; cin>>a;
        cout<<pen[a]<<endl;
        
    }


void pen_game(){

    cin>>n;
    // cin>>n;

    for (int i = 1; i <= n; i++)
    {   
        // cout<<"for "<<i<<endl;
        pen[i]=i;
        cin>>score[i];
        // cout<<score[i];
    }

    cin>>q;

    for (int i = 0; i < q; i++)
    {   
        cin>>t;
        switch (t)
        {
        case 1: 
            q1();
            break;
        case 2:
            q2();
            break;
        case 3:
            q3();
            break;
        }
    }
    


    }

int main()
{   
    int tt;
    cin>>tt;
while(tt--)
 pen_game();         

return 0;
}