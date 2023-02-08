#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int left,int mid,int right)
{
   vector<int>ans;
    int i=left,j=mid+1,k=0;
    while (i<=mid && j<=right)
    {
        if (arr[i]<arr[j]) ans.push_back(arr[i++]);
        else ans.push_back(arr[j++]);
       
    }
    while (i<=mid) ans.push_back(arr[i++]);
    while (j<=right) ans.push_back(arr[j++]);
    for(int i=left;i<=right;i++){
        arr[i]=ans[k++];
    }


  
}
void mergeSort(vector<int>&arr,int left,int right)
{
    if (left<right)
    {
        int mid=(left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
         
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    };
    mergeSort(arr,0,n-1);
    for ( auto x : arr){
        cout<<x<<" ";
    }
    return 0;

}