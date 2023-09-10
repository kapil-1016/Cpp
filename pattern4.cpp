// 4444
// 3333
// 2222
// 1111
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num of rows:";
    cin>>n;
    int i= 1;
    while(i<=n){
        int j=1;
        while(j<=n){
             cout<<n-i+1; //also can be (n-j+1)
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}