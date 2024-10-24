#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int smaller,bigger;
        smaller = bigger = 0;

        for (int i=0 ; i<nums.size()-1 ; ++i){
        	if (nums[i] < nums[i+1]){
        		if (bigger==0) ++smaller;
        		else 
        			return false;
        	}
        	if (nums[i] > nums[i+1]){
        		if (smaller==0) ++bigger;
        		else 
        			return false;
        	}
        }

        return true;
    }
};

int main(){    
    Solution slt;
	vector<int> nums = {1,2,2,4};

	cout << slt.isMonotonic(nums);

	return 0;
}