#include <iostream>
using namespace std;
bool istrue(int number);
main()
{
int number;
bool a;
float div1;
float div3;
cout<<"ENTER THE NUMBER:"<<endl;
cin>>number;
istrue(number);
a=istrue(number);
cout<<a<<endl;

}
bool istrue(int number)
{
float div1;
float div3;
div1=number/100;
div3=number%10;
    if(div1 == div3)
      {
 return true;
}
if(div1 != div3)
      {
 return false;
 
}

}
