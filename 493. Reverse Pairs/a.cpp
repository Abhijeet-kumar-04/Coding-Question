#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <queue>      // For priority_queue (often used as a heap)
#include <algorithm>  // For make_heap, sort, min, max, etc.

using namespace std;

class Solution {
public:
    void merge(vector<int>&v,int lo,int mid,int hi){
        vector<int>v1;
        vector<int>v2;
        for(int i=lo;i<=mid;i++){
            v1.push_back(v[i]);
        }
        for(int i=mid+1;i<=hi;i++){
            v2.push_back(v[i]);
        }
        vector<int>ans;
        int i=0;int j=0;
        int n1=v1.size();
        int n2=v2.size();
        while(i<n1 and j<n2){
            if(v1[i]<=v2[j]){
                ans.push_back(v1[i]);
                i++;
            }
            else{
                ans.push_back(v2[j]);
                j++;
            }
        }
        while(i<n1){
            ans.push_back(v1[i]);
            i++;
        }
        while(j<n2){
            ans.push_back(v2[j]);
            j++;
        }
        for (int k = lo; k <= hi; k++) {
            v[k] = ans[k - lo];
        }
    }
    int helper(vector<int>&v,int lo,int mid,int hi){
        int count = 0;
        int j = mid + 1;
        for (int i = lo; i <= mid; i++) {
            while (j <= hi && v[i] > 2LL * v[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
        return count;
    }
    int mergesort(vector<int>&v1,int lo ,int hi){
        int ans=0;
        if(lo>=hi) return ans;
        int mid=lo+(hi-lo)/2;
        ans+=mergesort(v1,lo,mid);
        ans+=mergesort(v1,mid+1,hi);
        ans+=helper(v1,lo,mid,hi);
        merge(v1,lo,mid,hi);
        return ans;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}