#include<bits/stdc++.h> 
using namespace std;
//binary search implementation 

int binarySearch(int arr[], int l, int r , int x)
{
    while(l<=r)
    {
        int m = l + (r-l)/2;
        
        if(arr[m] == x)
        {
            return m;
        }
        
        if(x < arr[m]) //target is present in left , discard right search namespace
        {
            r = m -1 ;
        }
        else
        {
            l = m + 1;
        }   
    }
    return -1;
}

int main()
{
    int arr[] = {2,5,8,9,22,-1,-2, 56};
    int n = 8;
    int x = 22;
    int result = binarySearch(arr, 0, n-1, x);
    cout<<result;
}