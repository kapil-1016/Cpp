#include<iostream>
using namespace std;

int find_sum(int array[], int size){
    int sum=0;
    for(int j=0; j<size; j++){
        sum+=array[j];
    }
    return sum;
}
int main(){
    int array[100];
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
   
    int sum = find_sum(array, size);
    cout<<"Sum of elements of array: "<<sum;
    return 0;
}



