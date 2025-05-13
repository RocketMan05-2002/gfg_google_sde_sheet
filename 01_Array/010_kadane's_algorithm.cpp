#include<iostream>
using namespace std;
vector<int> maxSubarraySum(int arr[], int n){
    int sum = 0, maxi = INT_MIN;
    vector<int>temp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        temp.push_back(arr[i]);
        if(sum>maxi) maxi = sum;
        if(sum<0){
            sum = 0;
            temp.pop_back();
        }
    }
    return temp;
}