#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// 496. Next Greater Element I
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    	vector<int> ans;

    	for (int i=0 ; i<nums1.size() ; i++){
    		int val = nums1[i];

    		auto it = find(nums2.begin(),nums2.end(),val);
    		auto pos = find_if(it, nums2.end(), [val](int number) {
        		return number > val;
    		});	

    		if (pos != nums2.end())
    			ans.push_back(*pos);
    		else ans.push_back(-1);
    	}

    	return ans;
    }
};

int main(){    
    Solution slt;
	vector<int> nums1 = {1,3,5,2,4};
	vector<int> nums2 = {6,5,4,3,2,1,7}; 
	// ket qua = [7,7,7,7,7]

	vector<int> ans = slt.nextGreaterElement(nums1,nums2);

	for (int i : ans)
		cout << i << ' ';

	return 0;
}