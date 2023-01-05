#include <iostream>
using namespace std;
main()
{	                                                    
int hour;
int min;
cout<<"ENTER THE HOUR: " <<endl;
cin>>hour;
cout<<"ENTER THE MINUTES: " <<endl;
cin>>min;
if(min<45)
   {
   min = min +15 ;
   }
 if(min>=45)
   {
   	min = min - 45 ;
    hour = hour + 1 ;
	}
    if(hour>23)
	{
    hour=0;
    }	
    
        cout<< hour << ":" << 	min <<endl;
}
	  

