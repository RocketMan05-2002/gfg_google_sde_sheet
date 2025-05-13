#include<bits/stdc++.h>
using namespace std;
vector<int> maxSubarraySum(vector<int> &arr){
    int n = arr.size();
    int sum = 0, maxi = INT_MIN;
    int start = 0, ans_start = 0, ans_end = 0;

    for(int i=0;i<n;i++){
        if(sum==0) start = i; //potential start of a new subarray
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
            ans_start = start;
            ans_end = i;
        }

        if(sum<0) sum = 0;
    }

    vector<int> result;
    for(int i = ans_start; i<=ans_end; i++){
        result.push_back(arr[i]);
    }
    return result;
}
int main(){
    vector<int>arr{-2,-3,4,-1,-2,1,5,-3};
    vector<int> vec = maxSubarraySum(arr);
    for(auto it:vec) cout<<it<<" ";
    return 0;
}