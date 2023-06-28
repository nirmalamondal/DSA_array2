/*Question 8.Given an array of meeting time intervals where intervals[i] = [starti, endi],
determine if a person could attend all meetings.

Example 1:
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false*/

#include<bits/stdc++.h>
using namespace std;

bool canAttendMeetings(vector<vector<int>>& nums) {
    sort(nums.begin(),nums.end(), [](vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    });

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i][0] < nums[i-1][1]) {
            return false; 
        }
    }

    return true;
}
    
    
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<int>>nums;
		for(int i=0;i<n;i++){
		
			int x,y;
			cin>>x>>y;
			nums.push_back({x,y});
		   }
		
			cout<< canAttendMeetings(nums)<<endl;
	
	}
	return 0;
}                 
