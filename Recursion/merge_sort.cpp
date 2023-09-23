#include<bits/stdc++.h>
using namespace std;
void merge(int* arr, int low, int mid, int high)
{
   int *a = new int[high - low + 1];
   int i = low, j = mid + 1;
   int pos = 0;
   while (i <= mid && j <= high)
   {
      if (arr[i] < arr[j])
         a[pos++] = arr[i++];
      else
         a[pos++] = arr[j++];
   }
   while (i <= mid)
      a[pos++] = arr[i++];
   while (j <= high)
      a[pos++] = arr[j++];
   pos = 0, i = low;
   while (i <= high)
      arr[i++] = a[pos++];
   delete[] a;
}

void merge_sort(int arr[],int l,int h)
{
    if(l==h)
    return;
    int mid = (l+h)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,h);
    merge(arr,l,mid,h);

}
int main()
{
    int arr[7]={1,4,2,7,3,9,10};
    merge_sort(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}