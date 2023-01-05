#include <iostream>
using namespace std;
string evenodd(int number,int div,int div2,int div3,int div4,int sum , string total);
main()
{
string total;
int number;
int div;
int div2;
int div3;
int div4;
int sum;
cout<<"PLZ!ENTER THE FIVE DIGIT NUMBER :"<<endl;
cin>>number;
evenodd(number, div, div2, div3, div4,sum ,total);
total=evenodd(number, div, div2,  div3, div4,sum, total);
cout<<"THE NUMBER IS "<<total<<endl;

}
string evenodd(int number,int div,int div2,int div3,int div4,int sum ,string total)
{
div=number/10000;
div2=div/1000;
div3=div2/100;
div4=div3/10;
sum = (div + div2 + div3 + div4);
   if( sum %2 == 0 )
     {   
    return "even";
     }
    if( sum %2 != 0 )
     {
    return "odd";
     }
     
}





