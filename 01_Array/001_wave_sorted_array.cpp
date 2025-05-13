#include<bits/stdc++.h>
using namespace std;
void waveSort(vector<int> &arr){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    vector<int> arr{1,2,3,4,5};
    waveSort(arr);
    for(auto it:arr) cout<<it<<endl;
    return 0;
}