#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,ecount=0,ocount=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0){
	            ecount++;
	        }
	        else{
	            ocount++;
	        }
	    }
	    if(ecount<=ocount){
	        cout<<"NOT READY\n";
	    }
	    else{
	        cout<<"READY FOR BATTLE\n";
	    }
	return 0;
}
