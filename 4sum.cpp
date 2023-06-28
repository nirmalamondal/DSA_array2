/*Question 2
Given an array nums of n integers, return an array of all the unique quadruplets
[nums[a], nums[b], nums[c], nums[d]] such that:
           ? 0 <= a, b, c, d < n
           ? a, b, c, and d are distinct.
           ? nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.

Example 1:
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]*/

#include<bits/stdc++.h>  
using namespace std;


vector<vector<int>> fourSum(vector<int>& nums, int target) {
         set<vector<int>> s;
        vector<vector<int>> ans;
        
        if (nums.size()<4) {
            return ans;
        }
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int i=0; i<n-3; i++) {
            for (int j=i+1; j<n-2; j++) {
                int low = j+1;
                int high = n-1;
                
                while (low<high) {
                  long long sum = (long long)nums[i] + nums[j] + nums[low] + nums[high];                    
                    if (sum == target) {
                        s.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    }
                    else if (sum<target) {
                        low++;
                    }
                    else {
                        high--;
                    }
                }
            }
        }
        
        for (auto x : s) {
            ans.push_back(x);
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
	    vector<vector<int>>ans = fourSum(arr,target);
	    for(int i=0;i<ans.size();i++){
	    	cout<<"[";
	      for (int j = 0; j < ans[i].size(); j++){
		  
	          cout<<ans[i][j]<<","; 
	      }
	       cout<<"],";
			  
		}
	       cout << endl;         

	}
    return 0;	
}	     
