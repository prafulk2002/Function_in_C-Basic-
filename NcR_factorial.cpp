// Write a program to do factorial of gib=ven number using function.
#include<iostream>
using namespace std;
int facto(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r; 
    cin>>n>>r; 
    int ans=facto(n)/(facto(r)*facto(n-r));
    cout<<ans<<endl;
    return 0;
}