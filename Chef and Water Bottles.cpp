#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,k;
	cin>>t;
	while(t--){
	    cin>>n>>x>>k;
	    int r=k/x;
	    if(n>=r){
	        cout<<r<<"\n";
	    }
	    else{
	        cout<<n<<"\n";
	    }
	}
	return 0;
}
