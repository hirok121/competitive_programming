#include <bits/stdc++.h>
using namespace std;

// brute force approach

int findmindis(vector<int> subset)
{
    int dis = 100;

    for (int i = 1; i < subset.size(); i++)
    {
        dis = min(dis, (subset[i] - subset[i - 1]));
    }
    return dis;
}

//vector<vector<int>> allsubset;

void generatesubsets(vector<int> vec, int idx, int k, int* ans)
{

   static  vector<int> subset;

    if (k == 0)
    {
      //  allsubset.push_back(subset);
        *ans = max(*ans, findmindis(subset));
        return;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        subset.push_back(vec[i]);
        generatesubsets(vec, idx + 1, k - 1, ans);
        subset.pop_back();
    }
}

// binary search approach 

bool is_feasible(int mid,vector<int> vec,int k){

    int pos=vec[0],elements=1;

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i]-pos>=mid)
        {
            pos=vec[i];
            elements++;
            if (elements==k)
            {
                return true;
            }
            
        }
        
    }
    
    return false;
}

int maxdiskelementsinarry(vector<int> vec,int k){

   int left=1;
   int  right=vec[vec.size()-1];

    int result=-1;

        while (left<=right)
        {
            int mid=(left+right)/2;
            if (is_feasible(mid,vec,k))
            {
               // result=max(result, mid);
               result=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
            
        }
        
   return result;
}

int main()
{

    vector<int> vec;
     vec.push_back(1);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(7);
   vec.push_back(11);
    vec.push_back(12);
    //  vec.push_back();
    //  vec.push_back();

    int ans=-1;

    generatesubsets(vec,0,3,&ans);


    cout<< " answer is " << ans <<endl;

    cout<< "ans by BSFUNC "<< maxdiskelementsinarry(vec,3);

    // for (int  i = 0; i < allsubset.size(); i++)
    // {
    //     for (int j = 0; j < allsubset[i].size(); j++)
    //     {
    //         cout<< allsubset[i][j] << " ";
    //     }

    //     cout<<endl;
        
    // }
    

    return 0;
}