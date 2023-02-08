#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void heapify(int arr[],int n,int h)
{
    int max=h;
    int lc=2*h+1,rc=2*h+2;
    if (lc<n && arr[lc]>arr[rc]) max=lc ;
    else max=rc;
    if (rc<n && arr[max]>arr[h]) {swap(arr[max],arr[h]);
    heapify(arr,n,max);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];
    for (int i=(n/2)-1;i>=0;i--)
    heapify(arr,n,i);
        for (int i=n-1;i>=0;i--)
        {
            swap(arr[0],arr[i]);
        heapify(arr,i,0);
        }
    
    for (int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}