//Maximum and minimum of an array using minimum number of comparisons
#include<iostream>
using namespace std;
void max_min(int arr1[],int n){
    
    int maxnum=arr1[0];
    for(int i=0;i<n;i++){
        if(arr1[i]>maxnum){
            maxnum=arr1[i];
        }
    }
    cout<<"maxNum is"<<maxnum;
    int minnum=arr1[0];
    for(int i=0;i<n;i++){
        if(arr1[i]<minnum){
            minnum=arr1[i];
        }

    }
    cout<<"minnum"<<minnum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    max_min(arr,n);

}