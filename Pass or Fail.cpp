#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,p;
	cin>>t;
	while(t--){
	    cin>>n>>x>>p;
	    int a=x*3;
	    int b=n-x;
	    int c=a-b;
	    if(c>=p){
	        cout<<"PASS"<<"\n";
	    }
	    else
	    {
	        cout<<"FAIL"<<"\n";
	    }
	}
	return 0;
}
