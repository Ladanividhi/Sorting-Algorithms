#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr, int low, int high)
{
    int pivot=arr[low];
    int i=low+1, j=high;
    while(i<=j)
    {
        while(i<=high && arr[i]<=pivot)
        {
            i++;
        }
        while(j>=low && arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(vector<int>&arr, int low, int high)
{
    if(low<high)
    {
        int p=partition(arr, low, high);
        quick_sort(arr, low, p-1);
        quick_sort(arr, p+1, high);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    quick_sort(arr, 0, n-1);
    for(int i:arr)
        cout<<i<<" ";
    return 0;
}