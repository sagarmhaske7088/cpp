#include<iostream>
using namespace std;
int main()
{
    int a,b,c,*p,*q;
   cout<<"Enter the value";
   cin>>a>>b;
  p=&a;
  q=&b;
    c=*p + *q;
    cout<<c;
    return 0;
    
}