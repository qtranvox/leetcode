#include <bits/stdc++.h>
using namespace std;

// 643. Maximum Average Subarray I
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int curSum = 0;
        int maxSum;

        for (int i=0 ; i<k ; ++i)
        	curSum += nums[i];

        maxSum = curSum;

        for (int i=k ; i<nums.size() ; ++i){
        	curSum = curSum + nums[i] - nums[i-k];

        	maxSum = max(maxSum,curSum);
        }

        return double(maxSum)/k;
    }
};

int main(){    
    Solution slt;
	vector<int> nums = {1,12,-5,-6,50,3};
	int k = 4;

	double ans = slt.findMaxAverage(nums,k);
	cout << fixed << setprecision(5) << ans;

	return 0;
}