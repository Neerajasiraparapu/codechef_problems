#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int count=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	    cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>=1000){
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
