/*Q6.Given a non-empty array of integers nums, every element appears twice except
for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only
constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1
*/

#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(ans[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
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
		
		cout<<singleNumber(nums)<<endl;
	}
	return 0;
}    
