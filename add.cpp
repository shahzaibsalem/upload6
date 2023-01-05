#include<iostream>
using namespace std;
int add(int a , int b );
main()
{
int a , b, total;
cout<<"ENTER THE FIRST NUMBER:"<<endl;
cin>>a;
cout<<"ENTER THE SECOND NUMBER:"<<endl;
cin>>b;
total =add( a ,  b );
cout<<"sum is :"<<total;
}
int add(int a , int b )
{
int sum = a + b;
return sum;
}