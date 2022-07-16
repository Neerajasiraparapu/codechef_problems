#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    int i=7-a;
	    int s=7-b;
	    if(i<s){
	        cout<<i<<"\n";
	    }
	    else{
	        cout<<s<<"\n";
	    }
	}
	return 0;
}
