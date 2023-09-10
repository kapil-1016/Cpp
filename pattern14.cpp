/* 
A B C
B C D 
C D E
*/
// LOGIC SAME AS
/* 
1 2 3
2 3 4           //i+j-1& 'A'+i+j-2
3 4 5
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
        while (j<=n){
           char ch ='A'+i+j-2;
           cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;

}