#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,c,x,y;
	cin>>t;
	while(t--){
	    cin>>c>>x>>y;
	    int d=c-x;
	    cout<<(d*y)<<"\n";
	}
	return 0;
}
