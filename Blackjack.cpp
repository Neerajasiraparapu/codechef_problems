#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    int r=a+b;
	    int s=21-r;
	    if(s<=10){
	        cout<<s<<"\n";
	    }
	    else{
	        cout<<-1<<"\n";
	    }
	}   
	return 0;
}
