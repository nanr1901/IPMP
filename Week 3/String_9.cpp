#include<bits/stdc++.h>
using namespace std;
int main()
{
    string src;
    cin>>src;
int n=src.size();
  string res="";
  for (int i=0;i<n;i++)
  {
      char temp=src[i];
      int count=1;
      while (src[i+1]==temp && i<n)
      {
          count++;
          i++;
      }
      res+=temp+to_string(count);
  }
  cout<<res;
}