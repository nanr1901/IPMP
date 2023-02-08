#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp1 = n & 0x0F;
     int temp2 = n & 0xF0;
    temp1=temp1 << 4;
     temp2=temp2 >> 4;
    cout<<(temp1|temp2);
}