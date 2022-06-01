#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x==y&&(x!=0||y!=0)){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
