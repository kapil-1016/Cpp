#include<iostream>
using namespace std;
int main(){
    int n;
   
    cout<<"enter number of rows required:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        for(int str=1;str<=2*(i-1);str++){
            cout<<"*"<<" ";
        }
        for(int t=n;t>=i;t--){
            cout<<t<<" ";
        }
        cout<<endl;
    }
    return 0;
}