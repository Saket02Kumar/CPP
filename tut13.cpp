/*#include<iostream>
using namespace std;
 int main(){
     int marks[4]={23,34,45,56};
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;

 } this is the first way of declaring the array */

#include<iostream>
using namespace std;
 int main(){
     int mathmarks[4];
     mathmarks[0]=22234;
     mathmarks[1]=224;
     mathmarks[2]=4534;
     mathmarks[3]=2289;


    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"the value of marks"<<i<<"is"<<mathmarks[i]<<endl;
    }
//pointers and array
int*p=mathmarks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
 cout<<"the value of *p is "<<*p<<endl;
 cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
 cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
 cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

 }
