#include <iostream>
#include <cmath>
using namespace std;
main()
{
float a;
float b;
float c;
float sec,sec2;
float quad_plus;
float quad_minus;
int power;
float square;


cout<<"ENTER VALUE OF A:"<<endl;
cin>>a;
cout<<"ENTER VALUE OF B:"<<endl;
cin>>b;
cout<<"ENTER VALUE OF C:"<<endl;
cin>>c;
square=b*b;
sec2 = square - 4*(a*c);
sec = sqrt(sec2);
quad_plus = (-b + sec)/(2*a);
quad_minus=(-b - sec)/(2*a);
cout<<"X SOLUTION IS :"<<quad_minus<<endl;
cout<<"X SOLUTION IS :"<<quad_plus;

}





