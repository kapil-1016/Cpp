#include <iostream>
using namespace std;
int main(){
    int n; int sum=0; int i=0;
    cout<< "enter value for n:";
    cin>> n;
    // using while loop:-
    while(i<=n){
        if(i%2==0){
            sum+=i;
        } i++;
    }

    // using do while loop:-
    do{
        if(i%2==0){
            sum+=i;
        }i++;
    }
    while(i<=n);

    // using for loop:-
    for(i;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }i++;
    }
    cout<< "sum of even nums till n is:"<<sum;
    return 0;
}