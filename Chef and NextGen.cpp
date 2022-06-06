#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,y;
	cin>>t;
	while(t--){
	    cin>>a>>b>>x>>y;
	    int r=a*b;
	    int s=x*y;
	    if(s>=r){
	       cout<<"Yes\n"; 
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
