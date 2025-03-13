#include <iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr1[i]);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr1[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int m;
    scanf("%d",&m);
    int arr2[1000];
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    intersection(arr1,arr2,n,m);

}