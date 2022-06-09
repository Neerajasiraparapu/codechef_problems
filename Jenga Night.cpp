#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,w,x;
	cin>>t;
	while(t--){
	    cin>>w>>x;
	    if(x%w==0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
