#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n%4==0){
	        cout<<"Good\n";
	    }
	    else{
	        cout<<"Not Good\n";
	    }
	}
	return 0;
}
