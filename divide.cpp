#include<iostream>
using namespace std;
float divide(float a , float b);
main()
{
float a , b;
float div;
cout<<"ENTER FIRST NUMBER:"<<endl;
cin>>a;
cout<<"ENTER SECOND NUMBER:"<<endl;
cin>>b;
div=divide( a , b);
cout<<"ANS IS :"<<div;
}

float divide(float a , float b)
{
float divide= a / b;
return divide;
}