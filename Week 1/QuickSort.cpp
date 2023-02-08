#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[],int left,int right)
{
    int pivot=arr[left];
    int current,lastmin;
    for (lastmin=left,current=left+1;current<=right;current++)
    {
        if (arr[current]<pivot) swap(arr[++lastmin],arr[current]);
    }
    swap(arr[left],arr[lastmin]);
    return lastmin;
}
void quick(int arr[],int left,int right)
{
    if (left<right)
    {
    int p=partition(arr,left,right);
    quick(arr,left,p-1);
    quick(arr,p+1,right);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];
    quick(arr,0,n-1);
     for (int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}