#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter number of rows required:";
    cin>>n;
    // part-1:-
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
    // part-2:-
    for(int str=1;str<=2*(i-1);str++){
        cout<<"*";
    }
    // part:3:-
    for(int num=n;num>=i;num--){
        cout<<num;
    }

    cout<<endl;
    }
    return 0;
}