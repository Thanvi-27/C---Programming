#include <iostream>
using namespace std;
void unique(int arr[],int n){
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }    
}
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[1000];
    cout<<"Enter elements in an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"After removing duplicate elements:";
    unique(arr,n);
}