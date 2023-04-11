#include<iostream>

using namespace std;

int  reversenum(int num){

    if (num<=0)
    {
        return 0;
    }

     reversenum(num/10);

   static int pow=1;

  static  int ans=0;
    ans +=(num%10)*pow;
   pow*=10;
        return ans ;

}

int main(){

    int number;

    cin>>number;

    if (reversenum(number)==number  )
    {
      cout<<" ÿes"; 
    }
    else{
   cout<<"no";
    }
    return 0;
}