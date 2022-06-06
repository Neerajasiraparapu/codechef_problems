#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    int a=((10*x)/100);
	    int b=100;
	    if(a>=b){
	        cout<<a<<"\n";
	    }
	    else{
	        cout<<b<<"\n";
	    }
	}
	return 0;
}
