#include<iostream>
#include<math.h>
using namespace std;    
int power(int a, int b) {
    int pwr =1; 
    for(int i = 1; i<=b; i++){
        pwr = pwr * a;
    }
    return pwr;
    
}
int main(){
    int answr= power(10,2);
    cout<<answr;
    return 0;
}