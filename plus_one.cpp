/* **Q5.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Example 1:**
Input: digits = [1,2,3]
Output: [1,2,4]

**Explanation:** The array represents the integer 123.

Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
*/


#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& v) {
        int n = v.size()-1;
        for(int i=n;i>=0;i--){
             if(v[i] == 9)
               { v[i] = 0;
               }
            else
               {
                  v[i] +=1;
                  return v;
               }
        }
            v.push_back(0);
            v[0] = 1;
            return v;
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
    arr.push_back(x)	;
	}
	vector<int> ans = plusOne(arr);
	for (int i =0;i< ans.size();i++) {
        cout << ans[i] << " ";
    }
    cout <<endl;
  }
  return 0;
}
