#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nxtnum=a+b;
        cout<<nxtnum<<" ";
        a=b;
        b=nxtnum;
    }
    return 0;
}