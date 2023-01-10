#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
if(t--){
    int x;
	cin>>x;
   
   
    int array[x];
    
for(int i=0;i<=x;i++){
	 cin>>array[i];
}

    for(int i=0;i<=x;i++){
	
		cout<<array[i];
		if(i<=0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1";
        }
	
        
    }
        
    
}
	return 0;
}
