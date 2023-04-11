#include <iostream>

using namespace std;

void string_sort(int * arr, int len){
    for(int i = 1; i < len; i++){
        int j = i;
        int p = arr[i];
        while(j > 0){
            if(arr[j-1]>p )
                arr[j] = arr[j-1];
            else
                break;
            j--;
        }
        arr[j] = p;
    }
}

int main()
{

    int input, inputcopy, counter = 0;
    cin >> input;
    int arr[input];
    for (int i = 0; i < input; i++)
    {
        cin>>arr[i];
    }

    string_sort(arr,input);
    
      for (int i = 0; i < input; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
   
    return 0;
}