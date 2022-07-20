//Write a program to add 2 numbers using functions

#include<iostream>
using namespace std;
int add(int n1, int n2)
{
    int sum=n1+n2;
    return sum;
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;

}
