/*
****
 ***
  **
   *
*/

// using for loop:-
// #include <iostream>
// using namespace std;
// int main(){
//      int i,j,n;
  
//     cout<<"enter number of rows required:";
//     cin>>n;
//      // using for loop:-
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(j<i){
//                 cout<<" ";}
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// using while loop:-
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num of rows required:";
    cin>>n;
    int i=0;
    while(i<=n){
        int j=0;
        while(j<=n){
            if(i<j){
                cout<<"*";
            }
            else{
                cout<<" ";
            } j++;
        }   i++;
        cout<<endl; 
    } 
    return 0;
}