#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        int a=z%x;
        int b=z%y;
        if(a==0&&b==0){
            cout<<"ANY\n";
        }
        else if(a!=0&&b!=0){
            cout<<"NONE\n";
        }
        else if(a==0&&b!=0){
            cout<<"CHICKEN\n";
        }
        else if(a!=0&&b==0){
            cout<<"DUCK\n";
        }
    }
	return 0;
}
