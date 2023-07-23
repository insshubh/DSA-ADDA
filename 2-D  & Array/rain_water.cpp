#include<bits/stdc++.h>
using namespace std;
 long long pro(long long arr[],int len)
 {
    int low =0,high = len -1;
    long long ans=0;
    while(low<=high)
    {
        
        long long length = 0 , breadth=0;
        
        length = min(arr[low],arr[high]);
        breadth=high-low;
        ans = max(ans,length*breadth);

        if(arr[low]<arr[high])
        {
            low++;
        }else{
            high--;
        }
    }
    return ans;
 }


int main()
{
    long long arr[4]={1,1,4,3};
    cout<< pro(arr,4);
    return 0;
}