#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }   
}
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements in an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    cout<<"The reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}