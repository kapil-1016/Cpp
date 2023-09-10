#include<iostream>
using namespace std;

int find_max(int array[], int size){
    int max_value = array[0];
    for(int i=1; i<size; i++){
        if(array[i]>max_value){
            max_value = array[i];
        }
    }
    return max_value;
}

int find_min(int array[], int size){
    int min_value = array[0];
    for(int i=1; i<size; i++){
        if(array[i]<min_value){
            min_value=array[i];
        }
    }
    return min_value;
}

int main(){
    int size;
    cout << "enter size of array: "<<endl;
    cin >> size;
    int array[size];
    cout<<"enter numbers: "<<endl;
    for(int i=0; i<=size; i++){
        cin>>array[i];
    }

    int max_value = find_max(array, size);
    int min_value = find_min(array, size);

    cout<<"max value: "<<max_value<<endl;
    cout<<"min value: "<<min_value<<endl;
    return 0;
}