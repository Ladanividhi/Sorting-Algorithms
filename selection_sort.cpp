#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&arr)
{
    int min=0;
    for(int i=0; i<arr.size(); i++)
    {
        min=i;
        for(int j=i; j<arr.size(); j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    selection_sort(arr);
    for(int i:arr)
        cout<<i<<" ";
    return 0;
}