#include <iostream>
using namespace std;
int main(){
    int n; int i=0; int sum=0; 
    cout<< "enter value for n:";
    cin>> n;

    // using for loop:-
   for(i;i<=n;i++){
        sum+=i;
    }
    cout<< "sum of nums until n is:"<<sum;


    // using while loop:-
    while(i<=n){
        sum+=i;
        i++;
    }
     cout<< "sum of n nums is:"<< sum;


    //  using do while loop:-
    do{
        sum+=i;
        i++;
    }
    while(i<=n);
    cout<< "sum of n nums is:" <<sum;
    return 0;
}