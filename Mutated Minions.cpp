#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int count=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        arr[i]+=k;
	        if(arr[i]%7==0){
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
