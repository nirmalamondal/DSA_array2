/* **Q4.** Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

**Example 1:**
Input: nums = [1,3,5,6], target = 5

Output: 2
*/

#include<bits/stdc++.h>
using namespace std;
int index_find(int arr[],int target_value,int n){
	int low = 0;
	int high = n;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid] == target_value)
		   return mid;
		else if (arr[mid]>target_value)
		   high = mid - 1;
		else
		   low = mid + 1;      
	}
	return high+1;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i]	;
	}
	int target_value;
	cin>>target_value;
	int ans = index_find(arr,target_value,n);
	cout<<ans<<endl;
  }
  return 0;
   
}
