#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number:";
    cin>>n;
    int count;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count=count+1;
        }
    }
    if(count==2){
            cout<<n<<"is a prime number"<<endl;
        }
        else{
            cout<<n<<" is a odd number"<<endl;
        }
}
