#include <iostream>
using namespace std;
int add(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
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
    int res=add(arr,n);
    cout<<"The sum of all elements in the array is: "<<res;
}