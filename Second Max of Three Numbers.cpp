#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,min,max;
	cin>>t;
	int arr[3];
	while(t--){
	    int sum=0;
	    for(int i=0;i<3;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    min=arr[0];
	    max=arr[0];
	    for(int i=0;i<3;i++){
	        if(arr[i]<=min)
	        {
	            min=arr[i];
	        }
	        if(arr[i]>=max){
	            max=arr[i];
	        }
	    }
	    cout<<(sum-(min+max))<<"\n";
	    
	}
	return 0;
}
