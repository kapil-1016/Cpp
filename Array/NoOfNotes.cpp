#include<iostream>
#include<math.h>
using namespace std;
int i, amount;
int arr[10] = {2000,1000,500,200,100,50,20,10,5,1};
int main(){
    cout << "Enter the amount: ";
    cin >> amount;

    for(i=0;i<10;i++){
        cout << arr[i] << "Note of rs: " << amount / arr[i] << endl;
        amount = amount % arr[i];
    }
    return 0;
    }
    