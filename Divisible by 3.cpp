#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	long a,b;
	while(t--){
	    cin>>a>>b;
	    if((a%3==0) || (b%3==0)){
	        cout<<0<<"\n";
	    }
	    else if(a%3 == b%3){
	        cout<<1<<"\n";
	    }
	    else{
	        cout<<2<<"\n";
	    }
	}
	return 0;
}
