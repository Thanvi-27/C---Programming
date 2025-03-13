#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums){
    int ans=0;
    for(int val : nums){
        ans=ans^val;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"The single number is: "<<singleNumber(nums)<<endl;
}
