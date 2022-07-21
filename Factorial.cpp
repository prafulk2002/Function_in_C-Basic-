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
    int n; 
    cin>>n;
    cout<<facto(n);
    return 0;
}