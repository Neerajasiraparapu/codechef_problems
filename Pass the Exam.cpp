#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	     int to=a+b+c;
	    if(to>=100){
	        if(a>=10&&b>=10&&c>=10){
	            cout<<"PASS\n";
	        }
	        else{
	            cout<<"FAIL\n";
	        }
	    }
	    else{
	        cout<<"FAIL\n";
	    }
	}
	return 0;
}
