#include <iostream>
using namespace std;
main()
{
int p1p;
int volume;
int pressure1;
int pressure2;
int hours;
int delay_time;
cout<<"ENTR THE TOTAL VOLUME OFTHE POOL:"<<endl;
cin>>volume;
cout<<"ENTER PRESSURE OF PIPE ONE PER HOUR:"<<endl;
cin>>pressure1;
cout<<"ENTER THE PRESSURE OF SECOND PIPE PER HOUR:"<<endl;
cin>>pressure2;
cout<<"ENTER THE TIME"<<endl;
cin>>hours;
p1p= pressure1+ pressure1;
delay_time = volume/(p1p);
  if(hours>delay_time)
    {
    cout<<"POOL IS OVERFLOW.NOW YOU ARE FIRED!:"<<endl;
    }
    if(hours<delay_time)
	{
	cout<<"POOL IS NOT OVERFLOW. YOUR JOB IS SAVED!:"<<endl;
    }
}


