#include <iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {
	// your code goes here
	int t,x1,y1,x2,y2;
	cin>>t;
	while(t--){
	    cin>>x1>>y1>>x2>>y2;
	    int r=max(abs(x1-x2),abs(y1-y2));
	    cout<<r<<"\n";
	}
	return 0;
}
