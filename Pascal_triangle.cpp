// Write aprogram to prind pascals trianglr using function.

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
    int r; 
    cin>>r; 
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<=i; j++)
        {
            int ans=facto(i)/(facto(j)*facto(i-j));
            cout<<ans<<" ";
        }
        cout<<endl; 
    }
    
    return 0;
}