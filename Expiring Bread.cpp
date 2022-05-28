#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m,k,t;
	cin>>t;
	while(t--){
	    cin>>n>>m>>k;
	    int e=m*k;
	    if(n<=e){
	        cout<<"Yes"<<"\n";
	    }
	    else
	    {
	        cout<<"No"<<"\n";
	    }
	}
	return 0;
}
