/*
1111
 222
  33
   4
*/

// using for loop:-
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter no of rows required:";
    cin>>n;
    for(i=1;i<=n+1;i++){
        for(j=1;j<=n+1;j++){
            if(i<j){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

// using while loop:-
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows required:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            if(i<=j){
                cout<<i;
            }
            else{
                cout<<" ";
            }
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}