#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int>umap;
    for (int i=0;i<n;i++)
    umap[s[i]]++;
    for (auto x:umap)
    {
        if (x.second>1)
        cout<<x.first<<" "<<x.second<<endl;
    }
}