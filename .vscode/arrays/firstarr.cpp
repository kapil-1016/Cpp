/* Arrays are kind of storage, that only stores one type of
data with contigous memory location.
Multiple data can be stored in an array that's why we use
array. */ 
#include<iostream>
using namespace std;
void printArray(char arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}
int main(){
    int arr[4]={3,5,4};
//    printArray(arr,3);

//    int rlns[2]={2,5};
//    printArray(rlns, 2);

//    int kbc[4]={2,3,5,6};
//    printArray(kbc,4);
// int arrsize= sizeof(arr)/sizeof(int);
// cout<<"size of arr is: "<<arrsize;
char alpha[6] = {'a','b','c','d'};
printArray(alpha, 4);

    return 0;   
}