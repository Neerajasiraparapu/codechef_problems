#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(n<m){
	        cout<<n<<"\n";
	    }
	    else if(m==0){
	        cout<<2*n<<"\n";
	    }
	    else if(n>m){
            int r=2*n;
            cout<<r-m<<"\n";
	    }
	    else if(n==m){
	        cout<<n<<"\n";
	    }
	}
	return 0;
}
