#include <iostream>
#include <cmath>
using namespace std;
main()
{
float angle;
float base , result , ta;
cout<<" ENTER THE ANGLE:"<<endl;
cin>>angle;
angle=angle*0.0174;
cout<<" ENTER THE BASE:"<<endl;
cin>>base;

ta=tan(angle);
result=ta*base;
cout<<"HEIGHT OF TREE IS:"<<result;
}
