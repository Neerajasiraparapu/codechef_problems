#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,p1,p2,q1,q2;
	cin>>t;
	while(t--){
	    cin>>p1>>p2>>q1>>q2;
	    int p,q;
	    p=max(p1,p2);
	    q=max(q1,q2);
	    if(p<q){
	        cout<<"P"<<"\n";
	    }
	    else if(p>q){
	        cout<<"Q"<<"\n";
	    }
	    else{
	        cout<<"TIE"<<"\n";
	    }
	}
	return 0;
}
