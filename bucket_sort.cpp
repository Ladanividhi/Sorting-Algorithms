#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<float>& arr, int n)
{
    for(int i=0; i<n; i++)
    {
        int j=i;
        while(j>0)
        {
            if(arr[j]<arr[j-1])
            {
                float temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            j--;
        }
    }
}

void bucketSort(vector<float>& arr, int n)
{
    vector<vector<float>> bucket(10);
    for(int i=0; i<n; i++)
    {
        bucket[int(n * arr[i])].push_back(arr[i]);
    }
    for(int i=0; i<10; i++)
    {
        insertionSort(bucket[i], bucket[i].size());
    }
    int index=0;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<bucket[i].size(); j++)
        {
            arr[index++]=bucket[i][j];
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<float>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bucketSort(arr, n);
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    return 0;
}