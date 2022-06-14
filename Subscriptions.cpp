#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    double r;
	    if(n<=6){
	       r=1;
	    }
	    else if(n%6==0){
            r=n/6;
	    }
	    else{
	        r=n/6+1;
	    }
	    cout<<(r*x)<<"\n";
	}
	return 0;
}
