/*Question 1
Given an integer array nums of length n and an integer target, find three integers
in nums such that the sum is closest to the target.
Return the sum of the three integers.

You may assume that each input would have exactly one solution.

Example 1:
Input: nums = [-1,2,1,-4], target = 1
Output: 2

Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).*/
#include<bits/stdc++.h>
using namespace std;



int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int diff = INT_MAX; 
        int ans;  
        for(int i=0; i<n; i++){
            int j = i+1; 
            int k = n-1; 
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k]; 
                if(abs(sum-target)<diff){
				
                diff = abs(sum-target);
                ans = sum;
            }
                if(sum == target) return sum;
                if(sum < target) {
                    j++; 
                } else {
                    k--; 
                }
            }
        }
        return ans;
    }
    
    
    
int main(){
	int t;
    cin>>t;
    while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr;
	    for(int i=0;i<n;i++){
		    int x;
		    cin>>x;
		    arr.push_back(x);
	    }
	    int target;
	    cin>>target;
	    cout<<threeSumClosest(arr,target)<<endl;   

	}
    return 0;	
}	     
