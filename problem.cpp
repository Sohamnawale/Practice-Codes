//Array Reverse 
#include<iostream>
using namespace std;
void reversearr(int arr1[],int size){
    int reversearr[size];
    for(int i =0;i<size;i++){
        reversearr[i]=arr1[size-i-1];
    }
    cout<<"reversed arr";
    for(int i =0;i<size;i++){
        cout<<reversearr[i]<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    reversearr(arr,n);
    
} 