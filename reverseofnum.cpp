#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num; int i;
    int revnum;
    while(num!=0){
        int rem = num%10;
        revnum = rem*10+revnum;
        num/=10;
    }
    cout<<revnum;
    return 0;
}