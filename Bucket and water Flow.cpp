#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,w,x,y,z;
	cin>>t;
	while(t--){
	    cin>>w>>x>>y>>z;
	    int r=w+(y*z);
	    if(r>x){
	        cout<<"overflow\n";
	    }
	    else if(r==x){
	        cout<<"filled\n";
	    }
	    else if(r<x){
	        cout<<"unfilled\n";
	    }
	}
	return 0;
}
