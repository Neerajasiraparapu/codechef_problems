#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n>x){
	        int i=n-x;
	        int c=i%4;
	        if(c==0){
	            if(i<4){
	                cout<<1<<"\n";
	            }
	            else {
	                cout<<(i/4)<<"\n";
	            }
	        }
	        else{
	            cout<<(i/4)+1<<"\n";
	        }
	    }
	    else{
	        cout<<0<<"\n";
	    }
	}
	
	return 0;
}
