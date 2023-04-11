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

int chartoi(char c){

    return c-'0';
}

char inttoch(int a){
    return '0'+a;
}

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int i;
    for (i = n-1; i >0; i--)
    {
        if(chartoi(s[i])+chartoi(s[i-1])>9)
            break;
    }

    if(i){
        int t=chartoi(s[i]),tt=chartoi(s[i-1]);
        int temp=tt+t;
        s[i]=inttoch(temp%10);
        s[i-1]=inttoch(temp/10);
    }else{
        int t=chartoi(s[0]),tt=chartoi(s[1]);
        int temp=tt+t;
        s[1]=inttoch(temp);
        //s[i-1]=inttoch(temp/10);
        s=s.substr(1);

    }
    cout<<s<<endl;   

}

void solve2(){
    string s; cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
}

long long int sumseries(long long int a,long long int b=0){

    int ans=(a*(a+1)/2 - b*(b+1)/2);
    return ans ; 
}

void spell(){
    int n; cin>>n;
    vi a(n);
    vi b(n);
    int j;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    long long int sum=0,mono=sumseries(b[0]);
    int cnt=b[0];

    for (int i = 0; i < n; i++)
    {
        sum+=mono;
        // cout<<"MONO "<<mono<<endl;
        for (j = i+1; j < n; j++)
        {
            if(a[j]-a[i]<b[j])
                break;
        }
        if(j==n){
            mono=sumseries(b[i+1]);
            // cout<<"MONO "<<mono<<endl;
            cnt=b[i+1];
        }
        else{
            int dif=cnt+a[i+1]-a[i];
            mono=sumseries(dif,cnt);
            cnt+=a[i+1]-a[i];
        }
    }
    
        cout<<sum<<endl;


}

void func(){

        int count[26];

        char str[1000];
            gets(str);

        vector<char> v;
        
        char seq[26];
        int si=1;

        for(int i=0;i<=25;i++)
        {
            seq[i]='\0';
            count[i]=0;
        }

        for(int i=0;str[i]!='\0';i++)
        {

            
            v.push_back(str[i]);


            if(str[i]>='a' && str[i]<='z')
            {
                count[str[i]-'a']++;
            }
        }

        for(int i=0;i<=25;i++)
        {

            if(count[i]!=0)
            {
                printf("%c = %d\n",'a'+i,count[i]);
            }
    }

}

int main()
{
    int t = 1;
    // cin>>t;
    // while (t--)
        func();

    // cout<<sumseries(4,9);

    unordered_map<char,int> mp;
    mp['f']=0;
    mp['s']=1;
    mp['e']=0;
    mp['r']=1;
    mp['t']=0;
    mp['u']=1;

    for(auto i : mp)
        cout<<i.first<<"  "<<i.second<<endl;


    return 0;
}