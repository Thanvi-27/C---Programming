#include <iostream>
using namespace std;
int product(int arr[],int n){
    int prod=1;
    for(int i=0;i<n;i++){
        prod=prod*arr[i];
    }
    return prod;
}
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=product(arr,n);
    cout<<"The sum of all elements in the array is: "<<res;
}