#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x<y){
	        cout<<0<<"\n";
	    }
	    else{
	        cout<<(x-y)<<"\n";
	    }
	}
	return 0;
}
