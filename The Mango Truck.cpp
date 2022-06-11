#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,z,t;
	cin>>t;
	while(t--)
    {
        cin>>x>>y>>z;
        cout<<((z-y)/x)<<"\n";
    }
    return 0;
}
