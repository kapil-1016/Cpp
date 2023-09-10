/*

. . . 1
. . 1 2 1        // this is little complicated patter,so we'll divide it into three parts
. 1 2 3 2 1      // A:- spaces(n-i)|| B:- print columns(j,j++)|| C:- print row nums(i-1,i--)
1 2 3 4 3 2 1

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows required:";
    cin>>n;
    int i=1;
    while(i<=n){
        // Triangle A:-
        int spaces=n-i;
        while(spaces){
            cout<<"  ";
            spaces--;
        }
        // Triange B:-
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        // Triangle C:-
        int t=i-1;
        while(t){
            cout<<t<<" ";
            t--;
        }
        cout << endl;
        i++;
    }
    return 0;
}