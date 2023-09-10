#include<iostream>
using namespace std;

bool ispresent(int array[], int size, int key){
    for(int i=0; i<size; i++){
        if(array[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int key;
     
    int array[100],n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"enter key you want to check:";
    cin>>key;  
    bool found = ispresent(array, n, key);
    if(found){
        cout<<"key is present.";
    }
    else{
        cout<<"key is absent.";
    }
    return 0;
}