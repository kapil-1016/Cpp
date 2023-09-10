#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int dnum;
    cout<<"enter decimal number: ";
    cin>>dnum;
    int bnum=0; int i=0;
    while(dnum!=0){
        int bit = dnum & 1;
        bnum = bit*(pow(10,i))+bnum;
        dnum = dnum >> 1;
        i++;
    }
    cout<<bnum;
    return 0;
}