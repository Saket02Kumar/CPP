  #include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    
    int a,b,c;
    int avg1,avg2,avg3;
    cin>>a>>b>>c;
    avg1=(a+b)/2;
    avg2=(a+c)/2;
    avg3=(b+c)/2;
    
    if(avg1<35 && avg2<35 && avg3<35){
        cout<<"fail"<<endl;
    }
    else
    {
        cout<<"pass"<<endl;
    }
 
}

	return 0;
}