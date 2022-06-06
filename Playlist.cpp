#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,n;
	cin>>t;
	while(t--){
	    cin>>x>>n;
	    int a=x/3;
	    int d=a/n;
	    cout<<d<<"\n";
	}
	return 0;
}
