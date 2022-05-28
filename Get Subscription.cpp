#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a;
	cin>>t;
	while(t--){
	        cin>>a;
	        if(a>30){
	            cout<<"YES"<<"\n";
	        }
	        else if(a<=30){
	            cout<<"NO"<<"\n";
	        }
	}
	return 0;
}
