#include <bits/stdc++.h>

using namespace std;

int minsubarrysum(int *arr, int size, int k)
{

    int start = 0, end = 0;
    int sum = 0, ans = INT_MAX;

    while (end < size)
    {
        while (sum <= k && end<size)
        {
            sum += arr[end++];
        }

       

        while (sum>k && start<end)
        {
            ans=min(ans,(end-start));
            sum-=arr[start++];
        }
        
    }

    return ans;
}

  // max sum subarry size k sum < x

  

int main()
{

    return 0;
}