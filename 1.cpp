#include <bits/stdc++.h>
using namespace std;

1. Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (auto it=nums.begin() ; it<nums.end() ; ++it){
        	int val = target-(*it);
        	auto pos = find(it+1,nums.end(),val);

        	if (pos != nums.end()){
        		ans.push_back(it - nums.begin());
        		ans.push_back(pos - nums.begin());
        		break;
        	}
        }

        return ans;
    }
};

// class Solution { 
// public:
// 	// 3s
//     vector<int> twoSum(vector<int>& nums, int target) {
//         map<int,int> mp;
//         vector<int> ans;

//         for (auto it=nums.begin() ; it<nums.end() ; ++it){
//         	int dis = it - nums.begin();
//         	int val = target-(*it);

//         	if ((nums[mp[val]] == val) && (mp[val] != dis)){
//         		ans.push_back(dis);
//         		ans.push_back(mp[val]);
//         		break;
//         	}

//         	mp[*it] = dis;
//         }

//         return ans;
//     }
// };

int main(){    
    Solution slt;
	vector<int> nums = {2,7,11,15};
	int target = 9;

	vector<int> ans = slt.twoSum(nums,target);

	for (auto x : ans) cout << x << ' ';

	return 0;
}