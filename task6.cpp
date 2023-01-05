#include <iostream>
using namespace std;
string check(char alph);
main()
{
char alph;
string ans;
cout<<"PLZ! ENTER EITHER A OR a :"<<endl;
cin>>alph;
check(alph);
ans = check(alph);
cout << " THE ALPHABET IS " << ans;
}
string check(char alph)
{
  if (alph == 'A' )
    {
    return "capital";
    }
    if (alph == 'a')
    {
    return "small";
    }
   return 0;
}
