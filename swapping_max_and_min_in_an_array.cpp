#include <iostream>
using namespace std;
void swap(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            arr[i]=min;
        }
        else if(arr[i]==min){
            arr[i]=max;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements in an array:";
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements after swapping min and max elements in an array: ";
    swap(arr,n);
}