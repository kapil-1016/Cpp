/* 
A
B B
C C C
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch ='A'+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}