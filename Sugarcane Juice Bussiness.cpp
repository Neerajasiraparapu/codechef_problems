#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    int i=50*x;
	    int s=i*20/100;
	    int sa=i*20/100;
	    int r=i*30/100;
	    cout<<i-(s+sa+r)<<"\n";
	}
	return 0;
}
