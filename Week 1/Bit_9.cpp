//pos of rightmost set bit
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=1,pos=0;
    while (!(n&m))
    {
        pos++;
        m=m<<1;
    }
    cout<<pos;
}