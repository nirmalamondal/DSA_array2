/*Question 7
You are given an inclusive range [lower, upper] and a sorted unique integer array
nums, where all elements are within the inclusive range.

A number x is considered missing if x is in the range [lower, upper] and x is not in
nums.

Return the shortest sorted list of ranges that exactly covers all the missing
numbers. That is, no element of nums is included in any of the ranges, and each
missing number is covered by one of the ranges.

Example 1:
Input: nums = [0,1,3,50,75], lower = 0, upper = 99
Output: [[2,2],[4,49],[51,74],[76,99]]

Explanation: The ranges are:
[2,2]
[4,49]
[51,74]
[76,99]*/

#include<bits/stdc++.h>
using namespace std;



vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;     
        int n = nums.size();
        if(n == 0 )
            return result;        
        int a = nums[0];
        for(int i = 0; i<n; i++)
        {
            if(i==n-1||nums[i]+1 != nums[i+1])
            {
                if(nums[i] != a)
                    result.push_back(to_string(a)+ "->"+ to_string(nums[i]));
                else
                        result.push_back(to_string(a));
						
                if(i != n-1)
                    a = nums[i+1];
            }
        }
	
        return result;
    }
    
    
    
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>nums;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			nums.push_back(x);
		}
		vector<string> ans = summaryRanges(nums);
		cout<<"[";
		for(int i=0;i<n;i++)
			cout<<ans[i]<<",";
		cout<<"]"<<endl;	
	}
	return 0;
}            
