//swap odd and even pos
#include<iostream>
using namespace std;
int main()
{
    int n;
    int x;
    cin>>n;
    for (int i=0;i<32;i++)
    {
    int i0=(n>>i)&1;
    int i1=(n>>(i+1))&1;
    x=x-(i0<<i)-(i1<<(i+1))+(i0<<(i+1))+(i1<<(i));
    }
    cout<<x;
}