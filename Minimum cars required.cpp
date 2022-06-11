#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int r=n/4;
	    if(n%4==0){
	        cout<<r<<"\n";
	    }
	    else{
	        cout<<r+1<<"\n";
	    }
	}
	return 0;
}
