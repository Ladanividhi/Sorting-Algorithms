#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        int j=i;
        while(j>0)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            j--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    insertion_sort(arr);
    for(int i:arr)
        cout<<i<<" ";
    return 0;
}