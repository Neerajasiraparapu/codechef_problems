#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int a=3*x;
	    int b=2*y;
	    if(a>b){
	        cout<<b<<"\n";
	    }
	    else{
	        cout<<a<<"\n";
	    }
	}
	return 0;
}
