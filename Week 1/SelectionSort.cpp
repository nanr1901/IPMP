#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int min=INT_MAX;
    vector<int>arr(n);
    int pos;
    for (int i=0;i<n;i++)cin>>arr[i];
    for (int i=0;i<n-1;i++)
    {
        min=arr[i];
        pos=i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<min){min=arr[j];pos=j;}
        }
        swap(arr[i],arr[pos]);
    }
    for (int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}