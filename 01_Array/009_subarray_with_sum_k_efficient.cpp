#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
//efficent
int countSubarrSum(vector<int> &arr, int k){
	int n = arr.size();
    unordered_map<int,int> prefix;
    int count = 0;
    prefix[0] = 1;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(prefix.find(sum-k)!= prefix.end()){
            // means sum-k exists
            count += prefix[sum-k];
        }
        prefix[sum]++;
    }
    return count;
}
int main(){
    vector<int> arr{10,2,-2,-20,10};
    int k = -10;
    int ans = countSubarrSum(arr,k);
    cout<<ans<<endl;
    return 0;
}