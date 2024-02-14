#include<iostream>
int robber(int arr[], int size, int ind, int total)
{
    if(ind >= size)
    {
        return total;
    }

    int sum1 = robber(arr,size,ind+1,total);
    int sum2 = robber(arr,size,ind+2,total+arr[ind]);
    
    return std::max(sum1,sum2);

}
int main()
{
   int arr[5]={2,3,1,5,4};
   std::cout<<robber(arr,5,0,0);

    return 0;
}