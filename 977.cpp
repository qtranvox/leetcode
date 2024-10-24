#include <bits/stdc++.h>
using namespace std;

// 977. Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        stack<int> st;
        vector<int> ans;

        int pos = 0;
        int val = 0;

        for (pos=0 ; pos<nums.size() ; ++pos){
            val = nums[pos];

            if (val >= 0)
                break;
            else st.push(val*val);
        }

        while((!st.empty()) || (pos<nums.size())){
            if (st.empty() && pos<nums.size()){
                for (pos ; pos<nums.size() ; ++pos){
                    val = nums[pos];
                    ans.push_back(val*val); 
                }
            }
            else if (!st.empty() && pos==nums.size()){
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop(); 
                }
            }
            else {
                val = nums[pos]*nums[pos];

                if (val < st.top()){
                    ans.push_back(val);
                    ++pos; 
                }
                else {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
        }

        return ans;
    }
};

int main(){    
    Solution slt;
	vector<int> nums = {-4,-1,0,3,10};

	vector<int> ans = slt.sortedSquares(nums);
	for (int x : ans) cout << x << ' ';

	return 0;
}