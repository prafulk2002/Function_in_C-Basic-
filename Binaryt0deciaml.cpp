#include<iostream>
using namespace std;
int binarytodecimal(int n)
{
    int y,ans=0;
    int x=1;
    while(n>0)
    {
        y=n%10;
        ans=ans+(y*x);
        x=x*2;
        n=n/10;
    }
    return ans;
}
int main()
{
    int a;
    cout<<"enter the binary number:";
    cin>>a;
    cout<<"decimal number is:";
    cout<<binarytodecimal(a);
    return 0;
}