#include <iostream>
using namespace std;
int multi(int a,int b);
main()
{
int a;
int b;
int ans;
cout<<"ENTER THE NUMBER :"<<endl;
cin>>b;
multi(a , b);
ans=multi(a , b);
cout<<"THE ANSWER IS :"<<ans<<endl;
}
int multi(int a,int b)
{
   a = (b*5);
   return a ;
}
