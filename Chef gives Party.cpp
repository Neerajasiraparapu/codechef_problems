#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,x,k;
	while(t--){
	   cin>>n>>x>>k;
	   int m=(n*x);
	   if(m<=k){
	       cout<<"YES"<<"\n";
	   }
	   if(m>k){
	       cout<<"NO"<<"\n";
	   }
	}
	return 0;
}
