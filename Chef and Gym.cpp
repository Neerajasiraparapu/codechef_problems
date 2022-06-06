#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        int r=x+y;
        if(z>=r){
            cout<<"2\n";
        }
        else if(x<=z){
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }
    }
	return 0;
}
