#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    int a=1+x;
	    int r=a%3;
	    if(r==0){
	        cout<<"SMALL\n";
	    }
	    else if(r!=0){
	        --a;
	        if(a%3==0){
	            cout<<"NORMAL\n";
	        }
	        else{
	            cout<<"HUGE\n";
	        }
	    }
	}
	return 0;
}
