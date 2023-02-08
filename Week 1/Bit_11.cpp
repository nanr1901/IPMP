#include<iostream>
using namespace std;
int main()
{
    int n,pos=0;
    cin>>n;
    if (n<=0) {cout<<"-1"; return 0;}
    int c=0;
    while (n>0)
    {
        if ((n&1)==1) c++;
        pos++;
        n=n>>1;
    }
    if (c==1) cout<<pos;
    else cout<<"-1";
}