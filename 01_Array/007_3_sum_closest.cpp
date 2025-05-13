#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &arr, int target){
    int n = arr.size();
    int closestSum = INT_MAX;
    int minDiff = INT_MAX;

    for(int i=0;i<n-2;i++){
        int left = i+1;
        int right = n-1;
        while(left<right){
            int sum = arr[i]+arr[left]+arr[right];
            int diff = abs(sum-target);
            
            if(diff<minDiff || (diff == minDiff && sum>closestSum)){
                closestSum = sum;
                minDiff = diff;
            }

            if(sum<target) left++;
            else right--;
        }
    }
    return closestSum;

}
int main(){
    vector<int>arr{-1,2,2,4};
    int target = 4;
    int closestSum = threeSumClosest(arr, target);
    cout<<closestSum<<endl;
    return 0;
}