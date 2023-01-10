#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"enter any number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        
        for(j=0; j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"*";
        }
        cout<<endl;


    }
    
    
    
    
    return 0;
}