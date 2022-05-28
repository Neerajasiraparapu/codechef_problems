#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int h,mh;
	while(t--){
	    cin>>h>>mh;
	    if(h<mh){
	        cout<<"NO"<<"\n";
	    }
	    else if(h>=mh){
	        cout<<"YES"<<"\n";
	    }
	}
	return 0;
}
