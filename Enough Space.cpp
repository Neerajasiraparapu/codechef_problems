#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,y;
	cin>>t;
	while(t--){
	    cin>>n>>x>>y;
	    int i=x+(y*2);
	    if(n>=i)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
