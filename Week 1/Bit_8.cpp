//add two numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    while (b!=0)
    {
        unsigned int carry =a&b;
        a=a^b;
        b=carry<<1;
    }
    cout<<a;
}