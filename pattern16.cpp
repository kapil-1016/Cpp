/* 
A
B C 
D D E
G E F G*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}