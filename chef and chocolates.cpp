#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    int a=(5*x);
	    int b=(10*y);
	    int c=(a+b)/z;
	    cout<<c<<"\n";
	}
	return 0;
}
