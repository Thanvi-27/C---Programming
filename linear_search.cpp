#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elemments in an array:";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the index value of the element: ";
    cin>>target;
    int res=linearsearch(arr,n,target);
    cout<<"The element is: "<<res;
}