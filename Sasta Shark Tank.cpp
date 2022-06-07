#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    int x=a*10;
	    int y=b*5;
	    if(x>y){
	        cout<<"FIRST\n";
	    }
	    else if(x<y){
	        cout<<"SECOND\n";
	    }
	    else{
	        cout<<"ANY\n";
	    }
	}
	return 0;
}
