#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    int r=y/x;
	    if(r>z){
	        cout<<0<<"\n";
	    }
	    else{
	        cout<<(z-r)<<"\n";
	    }
	   
	}
	return 0;
}
