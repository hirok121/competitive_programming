#include <bits/stdc++.h>

using namespace std;

int binarysearch(int *arr, int l, int r, int a)
{

    if (l > r)
    {
        return -1;
    }

    int mid = (r + l) / 2;

    if (arr[mid] == a)
    {
        return mid;
    }
    else if (arr[mid] < a)
    {
      return  binarysearch(arr, mid + 1, r, a);
    }
    else
    {

      return  binarysearch(arr, l, mid - 1, a);
    }
}


int recursive_binary_seach(int *arry,int s,int e,int key){

    if (s>e)
    {
            return -1;
    }
    

    int mid=(s+e)/2;

   if (key==arry[mid])
   {
    return mid;
   }
      if (key<arry[mid])
   {
   return recursive_binary_seach(arry,key,s,mid-1);
   }
   else if (key>arry[mid])
   {
    return  recursive_binary_seach(arry,key,mid+1,e);
   }  

}

int longestcomsubarr(int *arr1, int n1, int *arr2, int n2)
{

    int count = 0, result = 0, j, ii;

    for (int i = 0; i < n1; i++)
    {
        count=0;
       j = recursive_binary_seach(arr2, 0, n2 - 1, arr1[i]);
        
        if (j != -1)
        {
            ii = i+1;
            j++;
            count++;
            while (ii < n1 && j < n2 && arr1[ii] == arr2[j])
            {
                ii++;
                j++;
                count++;
            }
             result=max(result,count);
        }
       
    }

    return result;
}

int main()
{

    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {3, 2, 1, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]), n2 = sizeof(arr2) / sizeof(arr2[0]);

    int ans = longestcomsubarr(arr1, n1, arr2, n2);

    cout << binarysearch(arr2, 0, n1 - 1, 3) << endl;

    cout << recursive_binary_seach(arr2, 0, n2 - 1, 3) << endl;

    cout << "longest common subarry  " << ans << endl;

    return 0;
}