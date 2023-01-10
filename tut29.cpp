#include<iostream>
using namespace std;


class hod
{
    private :
     int a=34;

     public :
     int b=64;
     void print1() {
         cout<<"\n printing 'a' from class hod a ="<<a;


     }

     protected :
     int c=4566;


    ''' void print1() {
         cout<<"\n printing 'a' from class hod a ="<<a;


     }
     '''



};
class teacher :hod{
    int p=5768;
    int g=890;
    public :
    void print2()
    {
        cout<<"\n printing 'b' from class teacher b="<<b;

    }
};

int main ()
{
    hod h1;






    
    teacher t1;
    h1.print1();
    t1.print2();
    //cout<<"\n printing 'c' from main()c="<<h1.c;
    
    return 0;


}