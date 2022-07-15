#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<10){
	        cout<<x<<"\n";
	    }
	    else{
	        int i=x%10;
	        cout<<i<<"\n";
	    }
	}
	return 0;
}
