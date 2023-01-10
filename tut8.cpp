//constant in cpp
/*#include<iostream>
using namespace std;

int main()
    {const a=45;
    cout<<"the valueof a was "<<a;     //value of a cannot changed further
    a=4756
    cout<<"the value of a is "<<a;
    return 0;
    }*/
//manipulators
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    /*int a=3, b=45,c=2345;
    
    cout<<"the value of a without setw is"<<a<<endl;
    cout<<"the value of b without setw is"<<b<<endl;
    cout<<"the value of c without setw is"<<c<<endl;

    cout<<"the value of a is:"<<setw(4)<<a<<endl;
    cout<<"the value of b is:"<<setw(4)<<b<<endl;
    cout<<"the value of c is:"<<setw(4)<<c<<endl;
    */


   //operator precedence
   int a=3;
   int b=4;
   int c =((((a*5)+b)-45)+87);
   cout<<c;
   return 0;



}
