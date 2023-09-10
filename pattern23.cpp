 /*
   1
  22
 333   // same as pattern 19.
4444
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows required:";
    cin>>n;
    int i=1;
    while(i<=n){
       int spc = n-i;
       while(spc){
        cout<<" ";
        spc--;
       }
       int j=1;
       while(j<=i){
        cout<<i;
        j++;
       }
       cout<<endl;
       i++;
    }
    return 0;
}