/* 
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter no of rows:";
    cin>> n;
    int k=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< k<< " ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}