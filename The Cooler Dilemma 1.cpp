#include<iostream>
using namespace std;
int main(){
    int t,x,y,m;
    cin>>t;
    while(t--){
        cin>>x>>y>>m;
        int a=x*m;
        if(a<y){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
