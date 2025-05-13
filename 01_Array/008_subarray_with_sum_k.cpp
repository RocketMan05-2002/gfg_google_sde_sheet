#include<bits/stdc++.h>
using namespace std;
int countSubarrSum(vector<int> &arr, int k){
    int n = arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s += arr[j];
            if(s==k) count++;
        }
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