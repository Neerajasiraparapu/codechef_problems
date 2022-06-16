#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a>b){
	        cout<<b<<"\n";
	    }
	    else{
	        cout<<a<<"\n";
	    }
	}
	return 0;
}
