#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,k;
	cin>>t;
	while(t--){
	    cin>>n>>m>>k;
	    int a=n+k;
	    if(m>=a){
	        cout<<"Yes"<<"\n";
	    }
	    else{
	        cout<<"No"<<"\n";
	    }
	}
	return 0;
}
