#include <iostream>
using namespace std;
int sum(int n){
    int sum=0;
    while(n>0){
       int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}