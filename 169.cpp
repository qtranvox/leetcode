#include <bits/stdc++.h>
using namespace std;

// 169. Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int val = nums.size() / 2 + 1;
        
        for (int n : nums)
        	if (++mp[n] == val)
        		return n;
        	
        return 0;
    }
};

int main(){    
    Solution slt;
	vector<int> nums = {2,2,1,1,1,2,2};

	cout << slt.majorityElement(nums);

	return 0;
}