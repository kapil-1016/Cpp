//    *
//   **
//  ***
// ****

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num of rows:";
    cin>>n;
   int i=1;
   while (i<=n){
    int spc=n-i;
    while(spc){
        cout<<" ";
        spc--;
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;

   }
    return 0;
}