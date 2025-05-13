// given an array. return indices of a subarray equalling sum to target

#include<iostream>
#include<vector>
using namesoace std;
vector<int> subarrSum(vector<int> &arr, int target){
    int n = arr.size();
    int start =0;
    int curSum = 0;
    for(int end = 0; end<n; end++){
        curSum += arr[end];
        while(curSum > target){
            curSum -= arr[start];
            start++;
        }
        if(curSum == target){
            return {start+1,end+1};
        }
    }
    return {-1};
}
int main(){
    vector<int> arr{1,2,3,7,5};
    int target = 12;
    vector<int> ans = subarrSum(arr,target);
    for(auto it:ans) cout<<it<<" ";
    return 0;
}