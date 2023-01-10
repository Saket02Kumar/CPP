#include<iostream>
using namespace std;
int main()
{  //selection control structure  if else statement if else ladder
    //cout<<"this is tutorial 9";
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    /*if(age<18){
        cout<<"you can not come to my party";

    }
    else if(age==18)
    {
        cout<<"you should have to buy pass";

    }
else{
    cout<<"you can come to party"<<endl;
}*/



//selection control structure switch case
switch (age)
{
case 18:
    cout<<"you are 18";
    
    break;
case 22:
cout<<"you are 22";
break;

default:
cout<<"you arenot born yet";
    break;
}

    return 0;

}