#include <bits/stdc++.h>

using namespace std;

void mangos()
{
    int f, n, temp, ans;
    cin >> f >> n;

    temp = n - f * 2;

    if (temp > f)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << f - temp << endl;
    }
}

void solve()
{

    unsigned long long int n, k;
    cin >> n >> k;
    unsigned long long int temp, rem;
    temp = n / k;
    rem = n % k;
    if (temp % 2)
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
}

void money()
{
    vector<unsigned long long int> a(4);

    for (int i = 0; i < 4; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    unsigned long long int aa=(a[0] + a[3]),bb=(a[1] + a[2]);
    
    if (aa == bb)
        cout << "Yes\n";
    else
        cout << "No\n";
}

void game()
{

    vector<int> a(3);

    for (int i = 0; i < 3; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    cout << a[2] * 10 + a[1] + a[0] << endl;
}

void pencil_pen()
{
    int a, b, c, d, k, pen, pencile,t,tt;
    cin >> a >> b >> c >> d >> k;

    t=a % c ? 1 : 0;
    pen = a / c + t;
    tt= b % d ? 1 : 0;
    pencile = b / d +tt;

    if (pen + pencile > k)
        cout << -1 << endl;
    else
        cout << pen << " " << pencile << endl;
}

void triangle(){
    int a;
    cin>>a;



    for (int i = a;  ; i++)
    {
        for (int j = i; j<a+i  ; j++)
        {
            if((a*a + i*i) == j*j) {
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
        
    }
    
}

//longest posetive number sequence
void LPS_int(){
         int lps=INT_MIN,lps_temp=0,lps_sum,lps_sumtemp=0,st_lps,st_lpstemp,indx=0;
         int a;
        do
        {
           
            cin>>a;
            indx++;

            if (a>=0)
            {   
                st_lpstemp=indx;
                lps_sumtemp+=a;
                lps_temp++;
            }else{
               
                if(lps_temp>lps) {
                
                lps=lps_temp;
                lps_sum=lps_sumtemp;
                st_lps=indx-lps+1;

                }
                lps_sumtemp=0;
                lps_temp=0;
            }
            

        } while (a!=-1);
        
    cout<<"LPS ->"<<lps<<"\nSUm of lps "<<lps_sum<<"\nIndex of lps "<<st_lps<<endl;

}

void LPS_char(){

        int lps=INT_MIN,lps_temp=0,lps_sum,lps_sumtemp=0,st_lps,st_lpstemp,indx=0;
         char a;
         bool flag=false;
        do
        {
           if(flag) { flag=!flag ; continue;}

            cin>>a;
            indx++;
          
            if(a=='-' ) {
               
                flag=!flag; 
            }

            // cout<<aa<<' '<<a<<endl;; break;

            if (a!='-' && a!='q')
            {   
                int aa=a-'0';
                lps_sumtemp+=aa;
                lps_temp++;
            }else
            {
               
                if(lps_temp>lps) {
                
                lps=lps_temp;
                lps_sum=lps_sumtemp;
                st_lps=indx-lps+1;

                }
                lps_sumtemp=0;
                lps_temp=0;
            }
            

        } while (a!='q');
        
    cout<<"LPS ->"<<lps<<"\nSUm of lps "<<lps_sum<<"\nIndex of lps "<<st_lps<<endl;

}
int main()
{
    // int t; cin>>t;
    // while ((t--))
    // pencil_pen();
    // solve();
    LPS_char();

}