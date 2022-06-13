#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,count;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    count=0;
	        while(x<y){
	           x=x+8;
	           count++;
	        }
	        cout<<count<<"\n";
	    
	}
	return 0;
}
