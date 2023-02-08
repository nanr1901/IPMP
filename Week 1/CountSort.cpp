#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>arr;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    int max=arr[0];
    for (int i=1;i<n;i++)
    if (arr[i]>max) max=arr[i];
    vector<int>count(n+1,0);
    for (int i=0;i<n;i++)
    count[arr[i]]++;
    for (int i=1;i<=n;i++)
    count[i]+=count[i-1];
    vector<int>output(n);
    for (int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for (auto x:output)
    cout<<x<<" ";
}