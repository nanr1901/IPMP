//union and intersection of two sorted arrays

#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int>arr1,arr2;
    int n1,n2;
    cin>>n1>>n2;
    int temp;
    for (int i=0;i<n1;i++)
    {
        cin>>temp;
        arr1.push_back(temp);
    }
    for (int i=0;i<n2;i++)
    {
        cin>>temp;
        arr2.push_back(temp);
    }
    int i=0,j=0;
    vector<int>res,inter;
    while (i<n1 && j<n2)
    {
        if (arr1[i]<arr2[j])
        res.push_back(arr1[i++]);
        else if (arr2[j]<arr1[i])
        res.push_back(arr2[j++]);
        else 
        {
            inter.push_back(arr2[j]);
            res.push_back(arr2[j++]);
            i++;
        }
    }
    while (i<n1)
    {
        res.push_back(arr1[i++]);
    }
    while (j<n2)
    res.push_back(arr2[j++]);
    for (auto x:res)
    cout<<x<<" ";
    cout<<"\n";
    for (auto x:inter)
    cout<<x<<" ";
    



}