#include<iostream>
using namespace std;
int maxium(int a , int b);
main()
{
int a , b , greater;
cout<<"ENTER NUMBER ONE:"<<endl;
cin>>a;
cout<<"ENTER SECOND NUMBER:"<<endl;
cin>>b;
greater=maxium( a ,  b);
cout << greater << " IS GREATER NUMBER!" <<endl;
}

 int maxium(int a , int b)
   {
   if (a > b){
    return a;}
   if (b > a){
    return b;}
  return 0;
}