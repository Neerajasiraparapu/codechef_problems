#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y){
	        cout<<"SECOND"<<"\n";
	    }
	    else if(x<y){
	        cout<<"FIRST"<<"\n";
	    }
	    else{
	        cout<<"ANY"<<"\n";
	    }
	}
	return 0;
}
