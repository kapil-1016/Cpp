#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter desired operator: ";
    cin>>op;
    switch(op){

        case '+':
        cout<<"Additon of first and second number is: "<<a+b;
        break;

        case '-':
        if(a>=b){
            cout<<"Defference between first and second is: "<<a-b;
        }
        else{
            cout<<"Difference between second and first number is: " << b-a;
        }
        break;

        case '%':
         if(a>=b){
            cout<<"a%b : "<<a%b;
        }
        else{
            cout<<"b%a: " << b%a;
        }
        break;

        case '*':
        cout<<"Multiplication of first and second number is: "<<a*b;
        break;

        default:
        cout<<"You have entered an invalid operator.";
        
    }
    return 0;
}