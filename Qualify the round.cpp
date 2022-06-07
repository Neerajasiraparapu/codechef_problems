#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,a,b;
	cin>>t;
	while(t--){
	    cin>>x>>a>>b;
	    int r=b*2;
	    int s=a+r;
	    if(x<=s){
	        cout<<"Qualify\n";
	    }
	    else{
	        cout<<"NotQualify\n";
	    }
	}
	return 0;
}
