#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num to be checked:"; cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
           break;
        }}
        if(isPrime==0){
            cout<<n<<" is composite num.";
        }
        else{
            cout<<n<<" is a prime num.";
        }
    
    return 0;
}