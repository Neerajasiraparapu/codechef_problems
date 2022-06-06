#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    int r=abs(10-x);
	    if(r>=3){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
